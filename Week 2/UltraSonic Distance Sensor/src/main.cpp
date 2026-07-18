#include <Arduino.h>

#define  trig 11
#define Echo 17


void setup(){
    
    Serial.begin(115200);
    Serial.println("Sensor Started!");
    pinMode(trig, INPUT);
    pinMode(Echo, OUTPUT);
}
void loop(){
     
     digitalWrite(trig, LOW);
     digitalWrite(trig, HIGH);
     delay(10);
     digitalWrite(trig, LOW);
     int duration = pulseIn(Echo,HIGH);
     Serial.print("Distance in CM: ");
  Serial.println(duration / 58);
  Serial.print("Distance in inches: ");
  Serial.println(duration / 148);

  delay(1000);
}


