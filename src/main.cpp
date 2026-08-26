#include <Arduino.h> 
#define LED_PIN 13            // doi chan LED 
#define SENSOR_PIN A0 
int threshold = 300;      // tang nguong 
 
void loop() { 
    int value = analogRead(SENSOR_PIN); 
    if (value > threshold) 
        digitalWrite(LED_PIN, !digitalRead(LED_PIN)); 
}
