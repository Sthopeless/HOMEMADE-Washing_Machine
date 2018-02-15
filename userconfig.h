/************************* WIFI CONFIGURATION **********************************/
#define wifi_ssid ""
#define wifi_password ""

/************************* MQTT BROKER CONFIGURATION ***************************/
#define mqtt_broker ""
#define mqtt_username ""
#define mqtt_password ""
#define mqtt_port 1883
#define MQTT_Client "MQTT-Washing_Machine"

/************************** MQTT TOPICS & COMMANDS *****************************/
#define topic1 "/" MQTT_Client "/dryer/detail/";
#define topic2 "/" MQTT_Client "/dryer/";
#define topic3 "/" MQTT_Client "/washer/detail/";
#define topic4 "/" MQTT_Client "/washer/";

/***************************** CONFIGURATION ***********************************/
//**********DEFINE NODEMCU PINS**********//
#define D0 16
#define D1 5 // I2C Bus SCL (clock)
#define D2 4 // I2C Bus SDA (data)
#define D3 0
#define D4 2 // Same as "LED_BUILTIN", but inverted logic
#define D5 14 // SPI Bus SCK (clock)
#define D6 12 // SPI Bus MISO 
#define D7 13 // SPI Bus MOSI
#define D8 15 // SPI Bus SS (CS)
#define D9 3 // RX0 (Serial console)
#define D10 1 // TX0 (Serial console)

//**********DEFINE GPIO PINS**********//
#define DRYER_DOOR D7 // number of reed sensor for dryer
#define WASHER_DOOR D8 // number of reed sensor for dryer

//**********DEFINE STATES**********//
#define CLOSED 0  //washer/dryer door closed
#define OPEN 1 //washer/dryer door open
#define EMPTY 0 //washer/dryer empty
#define RUNNING 1 //washer/dryer running
#define COMPLETE 2 //washer/dryer complete
#define MOVEMENT_DETECTED 0
#define MOVEMENT_NOT_DETECTED 1
