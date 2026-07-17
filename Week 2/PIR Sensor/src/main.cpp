#include<Arduino.h>

#define PIRSensorpin 4

void setup(){
pinMode(4,INPUT_PULLDOWN);
Serial.begin(115200);
Serial.println("Sensor Started");
delay(1000);
}
void loop(){
    
  int motion=digitalRead(PIRSensorpin);
  if(motion==HIGH){
     Serial.println("Motion Detected!");
  }
  else{
Serial.println("There is no motion!");
  }

}