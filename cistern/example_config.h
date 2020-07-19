// keep alive time for pubsublib mqtt client in seconds   -> should be higher than interval
#define MQTT_KEEPALIVE 60

// time to wait between reportings in ms
const int interval = 15000;

// client identifier also used as the "source" tag for influxdb
const char *clientId = "test";

// wlan settings
const char *ssid = "foobar";
const char *wifiPass = "foobar";

// mqtt server
const char *mqttServer = "mqtt.example.com";
const int mqttPort = 8883;
const char *mqttUser = "user";
const char *mqttPassword = "password";
