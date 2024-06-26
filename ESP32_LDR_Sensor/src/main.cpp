#include <Arduino.h>

#define LED_PIN 22
#define LDR_PIN 2

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  Serial.println(analogRead(LDR_PIN));
  if(analogRead(LDR_PIN) > 400 ){
    digitalWrite(LED_PIN, HIGH);
  }
  else{
    digitalWrite(LED_PIN, LOW);
  } 
  delay(100);
}