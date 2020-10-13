#include <Arduino.h>
#include <Ticker.h>

#include "coronatracker-display.h"
#include "coronatracker-ble.h"
#include "coronatracker-wifi.h"
#include "coronatracker-spiffs.h"

#define BUTTON_PIN 0
#define LED_PIN 16

#define ACTION_NOTHING 0
#define ACTION_ADVERTISE 1
#define ACTION_SCAN 2
#define ACTION_WIFI_CONFIG 3
#define ACTION_INFECTION_REQUEST 4

#define SLEEP_INTERVAL 1000000 //In microseconds --> 1000 milliseconds

//average time for one boot: 4000ms (with a cpu frequency of 80)
#define BOOTS_UNTIL_SCAN 21                //approximately every minute
#define BOOTS_UNTIL_INFECTION_REQUEST 1260 //probably just if the esp is charging //approximately every hour
#define BOOTS_UNTIL_DISPLAY_TURNS_OFF 4

#define SCAN_TIME 5        //in seconds
#define ADVERTISE_TIME 200 //in milliseconds

//Saved during deep sleep mode
RTC_DATA_ATTR int nextAction = 0;
RTC_DATA_ATTR int bootCount = 0;
RTC_DATA_ATTR int scanedDevices = 0;
RTC_DATA_ATTR int bootsLeftUntilNextRequest = BOOTS_UNTIL_INFECTION_REQUEST; //Should be deleted when it's not depending on boots anymore
RTC_DATA_ATTR int bootsLeftUntilDisplayTurnsOff = BOOTS_UNTIL_DISPLAY_TURNS_OFF;
RTC_DATA_ATTR bool wifiInitialized = false;
RTC_DATA_ATTR bool firstBoot = true;
RTC_DATA_ATTR bool requestOnStartUp = false; //For disabling startup request
RTC_DATA_ATTR bool isDisplayActive = false;

//Wifi Variables
const static int BUTTON_PRESS_DURATION_MILLISECONDS = 4000; //4 Seconds

int buttonState = 0;
int lastButtonState = 0;
int startPressed = 0;

Ticker buttonTicker;

//Time Variables
const char *ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 3600;
const int daylightOffset_sec = 3600;

void blinkLED()
{
    int state = digitalRead(LED_PIN);
    digitalWrite(LED_PIN, !state);
}

bool initializeTime()
{
    struct tm timeinfo;
    int start = millis();
    const int WAITTIME = 180000; //3 Minutes

    do
    {
        if ((millis() - start) >= WAITTIME)
        {
            return false;
        }
        configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
        delay(500);

    } while (!getLocalTime(&timeinfo));
    Serial.print("Local Time: ");
    Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
    delay(5000);
    return true;
}

void restartAfterErrorWithDelay(String errorMessage, uint32_t delayMS = 10000)
{
    digitalWrite(LED_PIN, LOW);
    Serial.println(errorMessage);
    delay(delayMS);
    ESP.restart();
}

void setNextAction(int action)
{
    switch (action)
    {
    case ACTION_SCAN:
        Serial.println("Next: Scanning");
        nextAction = ACTION_SCAN;
        break;
    case ACTION_WIFI_CONFIG:
        Serial.println("Next: Wifi-Config");
        nextAction = ACTION_WIFI_CONFIG;
        break;
    case ACTION_INFECTION_REQUEST:
        Serial.println("Next: Infection-Request");
        nextAction = ACTION_INFECTION_REQUEST;
        break;
    case ACTION_ADVERTISE:
        Serial.println("Next: Advertising");
        nextAction = ACTION_ADVERTISE;
        break;
    default:
        nextAction = ACTION_NOTHING;
        break;
    }
}

void goIntoDeepSleep(bool requestInfections)
{
    bootCount++;

    //TODO: Rework System to use actual time instead of counting boots
    if (requestInfections) //Request Infection on First boot after initialize
    {
        setNextAction(ACTION_INFECTION_REQUEST);
    }
    else if (bootCount % BOOTS_UNTIL_INFECTION_REQUEST == 0)
    {
        setNextAction(ACTION_INFECTION_REQUEST);
    }
    else if (bootCount % BOOTS_UNTIL_SCAN == 0)
    {
        setNextAction(ACTION_SCAN);
    }
    else
    {
        setNextAction(ACTION_ADVERTISE);
    }

    esp_sleep_enable_ext0_wakeup(GPIO_NUM_0, LOW);
    esp_sleep_enable_timer_wakeup(SLEEP_INTERVAL);
    esp_deep_sleep_start();
}

void setup()
{
    //Deletes stored Wifi Credentials if uncommented
    //WiFiManager manager;
    //manager.resetSettings();

    //Setting up Serial
    Serial.begin(115200);
    Serial.println("Serial initialized");

    float start = micros();
    float end;

    //Setting up pinModes
    Serial.println("Setting up pinModes");
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, PULLUP);

    digitalWrite(LED_PIN, HIGH); //HIGH means LED is off

    Serial.println("Initialize display");
    if (!isDisplayActive)
    {
        initDisplay();
        bootsLeftUntilDisplayTurnsOff = BOOTS_UNTIL_DISPLAY_TURNS_OFF;
    }
    else
    {
        if (bootsLeftUntilDisplayTurnsOff <= 0)
        {
            isDisplayActive = false; //next boot the display will be initialized again
        }
        else
        {
            bootsLeftUntilDisplayTurnsOff -= 1;
        }
    }

    esp_sleep_wakeup_cause_t wakeup_reason;
    wakeup_reason = esp_sleep_get_wakeup_cause();
    struct tm timeinfo;
    getLocalTime(&timeinfo);

    buttonState = digitalRead(BUTTON_PIN);
    if (wakeup_reason == ESP_SLEEP_WAKEUP_EXT0 || buttonState == LOW)
    { //LOW means clicked
        if (!isDisplayActive)
        {
            Serial.println("Wakeup caused by external signal using RTC_IO");
            showLocalTimeOnDisplay(timeinfo);
            showNumberOfScanedDevicesOnDisplay(scanedDevices);
            showRequestDelayOnDisplay(bootsLeftUntilNextRequest, BOOTS_UNTIL_SCAN);
            isDisplayActive = true;
        }
        else
        { 
            clearDisplay();
            isDisplayActive = false;
        }
    }

    //Wifi not initialized
    if (!wifiInitialized)
    {
        Serial.println("Wifi-Configuration");
        digitalWrite(LED_PIN, LOW);
        setNextAction(ACTION_WIFI_CONFIG);
    }
    else
    {
        if (firstBoot)
        {
            firstBoot = false;

            Serial.println("Initializing SPIFFS");
            if (!initSPIFFS(true))
            {
                restartAfterErrorWithDelay("SPIFFS initialize failed");
            }

            //Getting Time
            if (!connectToStoredWifi())
            {
                restartAfterErrorWithDelay("Could not connect to Wifi!");
            }

            Serial.println("Initializing Time");
            if (!initializeTime())
            {
                restartAfterErrorWithDelay("Time initialize failed");
            }

            Serial.print("Generating TEK - ");
            signed char tek[16];
            int enin;
            if (getCurrentTek(tek, &enin))
            {
                Serial.println("Already exists");
            }
            else
            {
                if (!generateNewTemporaryExposureKey(calculateENIntervalNumber(time(NULL))))
                {
                    restartAfterErrorWithDelay("Failed to generate Temporary Exposure Key");
                }
                Serial.println("Generated");
            }

            Serial.println("Disconnecting Wifi");
            if (!disconnectWifi())
            {
                Serial.println("Disconnect Failed");
            }

            goIntoDeepSleep(requestOnStartUp);
        }

        Serial.println("Initializing SPIFFS");
        if (!initSPIFFS(false))
        {
            restartAfterErrorWithDelay("SPIFFS initialize failed");
        }

        if (nextAction == ACTION_ADVERTISE || nextAction == ACTION_SCAN)
        {
            Serial.println("Initializing BLE");
            if (!initBLE(nextAction == ACTION_SCAN, nextAction == ACTION_ADVERTISE))
            {
                restartAfterErrorWithDelay("BLE initialize failed");
            }
        }
    }

    //printDatabases();
    if (nextAction == ACTION_SCAN)
    {
        Serial.println("Starting Scan...");

        std::vector<std::__cxx11::string> rpis = scanForCovidDevices((uint32_t)SCAN_TIME);
        deinitBLE(true); //free memory for database interaction
        scanedDevices = rpis.size();
        if (bootsLeftUntilNextRequest <= 0)
        {
            bootsLeftUntilNextRequest = BOOTS_UNTIL_INFECTION_REQUEST;
        }
        else
        {
            bootsLeftUntilNextRequest -= BOOTS_UNTIL_SCAN;
        }

        insertTemporaryRollingProximityIdentifiers(time(NULL), rpis);
        cleanUpTempDatabase();
    }
    else if (nextAction == ACTION_ADVERTISE)
    {
        delay(ADVERTISE_TIME);
    }
    else if (nextAction == ACTION_WIFI_CONFIG)
    {
        Serial.println("Starting WifiManger-Config");
        buttonTicker.attach_ms(500, blinkLED);

        configureWifiMessageOnDisplay();
        bool res = configureWifi();

        buttonTicker.detach();
        if (res)
        {
            Serial.println("We connected to Wifi...");
            wifiInitialized = true;
            digitalWrite(LED_PIN, HIGH);
            wifiConfiguredSuccessfullyOnDisplay();
        }
        else
        {
            Serial.println("Could not connect to Wifi");
            digitalWrite(LED_PIN, LOW);
            configureWifiFailedOnDisplay();
        }
        delay(5000);
        disconnectWifi();
    }
    else if (nextAction == ACTION_INFECTION_REQUEST)
    {
        bool result = checkForInfections();
        showIsInfectedOnDisplay(result);
        delay(5000);
    }

    end = micros();
    float result = end - start;
    result /= 1000; //convert to milliseconds
    Serial.printf("Time(milliseconds): %g\n", result);

    goIntoDeepSleep(false);
}

void loop()
{
    //Never called
}