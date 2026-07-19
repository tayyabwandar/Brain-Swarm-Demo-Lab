#include <Arduino.h>

#define analogPin 4
#define digitalPin 5

void setup() {
  Serial.begin(115200);

  pinMode(analogPin, INPUT);
  pinMode(digitalPin, INPUT);

  Serial.println("LDR Sensor Started");
}

void loop() {

  int digitalState = digitalRead(digitalPin);
  int analogValue = analogRead(analogPin);

  Serial.print("Digital = ");
  Serial.println(digitalState);
  if(digitalState==LOW){
    Serial.println("Bright");
  }
  else{
    Serial.println("Dark");
  }

  Serial.print("   Analog = ");
  Serial.println(analogValue);

  delay(1000);
}