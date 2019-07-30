#include <Arduino.h>
#include <ElectrodragonRelay.h>

bool isOn = false;

void setup() {
    pinMode(Pin_Relay_1, OUTPUT);
    pinMode(Pin_Relay_2, OUTPUT);
    pinMode(Pin_StatusLed, OUTPUT);
    pinMode(Pin_DHT, OUTPUT);
    pinMode(Pin_IO_15, OUTPUT);
    pinMode(Pin_IO_4, OUTPUT);
    pinMode(Pin_IO_5, OUTPUT);
    pinMode(Pin_Button_1, INPUT);
    pinMode(Pin_Button_2, INPUT);
}

void loop() {
    digitalWrite(Pin_Relay_1, isOn);
    digitalWrite(Pin_Relay_2, isOn);
    digitalWrite(Pin_StatusLed, isOn);

    delay(500);

    isOn != isOn;
}