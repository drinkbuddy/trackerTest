#include <Arduino.h>

//Time Constants
const static int HOUR = 3600;
const static int MINUTE = 60;
const static int DAY = 86400;


void initDisplay();
void showIsInfectedOnDisplay(bool metInfected);
//TODO Change behaviour of time requestDelay on screen
void showLocalTimeOnDisplay(struct tm timeinfo);
void configureWifiMessageOnDisplay();
void showRequestDelayOnDisplay(int bootsLeftUntilNextRequest, int bootsUntilScan);
void wifiConfiguredSuccessfullyOnDisplay();
void configureWifiFailedOnDisplay();
void showNumberOfScanedDevicesOnDisplay(int scanedDevices);
void clearDisplay();