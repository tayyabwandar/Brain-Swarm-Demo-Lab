#include<Arduino.h>
const int PIR_PIN = 2;
const int LED_PIN = 1;

unsigned long lastMotionTime = 0;

void setup() {
  Serial.begin(9600);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  
  digitalWrite(LED_PIN, HIGH);

  Serial.println("Smart Light Started");
}

void loop() {

  int motion = digitalRead(PIR_PIN);

  
  if (motion == HIGH) {

    
    digitalWrite(LED_PIN, LOW);

    
    lastMotionTime = millis();

    Serial.println("Motion detected - Light ON");
  }


  if (millis() - lastMotionTime >= 10000) {

    
    digitalWrite(LED_PIN, HIGH);

    Serial.println("No motion - Light OFF");
  }

  delay(50);
}