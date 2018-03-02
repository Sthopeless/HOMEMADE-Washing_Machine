# MQTT-Washing_Machine
Use a NodeMCU and 2 MPU-6050's to monitor the status of your washer and dryer.
All credits go to the author https://github.com/nkgilley/nodemcu-laundry

*------=Hardware=------*
1. ESP8266 (WeMos or NodeMCU)
2. MPU-6050
2. Reed Switch

*------=Libraries=------*
```
I2Cdev = https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/I2Cdev
MPU6050 = https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050
```

*------=PINOUT=------*

| `esp8266 >`   | VCC         | GROUND  | DATA |                       
| ------------: | :---------: | :-----: | :--: |
| `MPU6050`     |             |         |      |
| `Reed Switch` |             |         |      |
