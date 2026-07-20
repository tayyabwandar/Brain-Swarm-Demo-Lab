#include<Arduino.h>
#include <Adafruit_FT6206.h>
#include<Wire.h>

Adafruit_FT6206 touch;


void setup(){
  Wire.begin(11,4);
  Serial.begin(115200);
  touch.begin();
  Serial.println("Touchsensor Started!");
  
}
void loop(){
    if(touch.touched()){
       TS_Point points = touch.getPoint();
       points.x =map(points.x,0,240,240,0);
       points.y=map(points.y,0,320,320,0);
    Serial.print("X: ");
    Serial.println(points.x);
    Serial.print("Y: ");
    Serial.println(points.y);
    Serial.println("Pressure: ");
    Serial.print(points.z);
    delay(2000);

    }
    else{

      delay(2000);
    }



}