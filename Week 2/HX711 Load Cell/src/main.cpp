#include <Arduino.h>
#include<HX711.h>


#define data 15
#define clock 8

HX711 loadcell;

float calibratedfactor =-7000;



void setup(){

Serial.begin(115200);
loadcell.begin(data,clock);
Serial.println("Sensor Started!");
loadcell.set_scale(calibratedfactor);
loadcell.tare();
}
void loop(){
   Serial.println("Weight:");
   Serial.print(loadcell.get_units(),2);
Serial.println("g");
delay(2000);

}