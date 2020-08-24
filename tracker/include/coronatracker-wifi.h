#include <Arduino.h>
#include <WifiManager.h>
#include <HTTPClient.h>
#include <ArduinoJSON.h>
#include <ArduinoWebsockets.h>

#include "coronatracker-crypto.h"
#include "coronatracker-spiffs.h"

#define SERVER_URL "https://tracing.uniks.de"
#define RSIN_URL "/infections/rsin"
#define WS_URL "ws://tracing.uniks.de/cwa"

const size_t JSON_CAPACITY = JSON_ARRAY_SIZE(16);

bool disconnectWifi();
bool connectToStoredWifi();
bool configureWifi();
bool checkForInfections();