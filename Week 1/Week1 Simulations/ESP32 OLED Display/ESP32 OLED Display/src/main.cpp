#include <Arduino.h>
#include<Wire.h>
#include<Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define SCL 17
#define SDA 18
#define OLEDAddress 0x3C
#define Width 128
#define height 64

Adafruit_SH1106G display(Width,height, &Wire, -1);

void setup(){
  Serial.begin(9600);
  Serial.println("Starting");
  Wire.begin(SDA,SCL);
   if(!display.begin(0x3C,true)){
    while (true)
    Serial.print("OLED Mem Buffer Initialization Failed");
   }

  display.clearDisplay();
  display.setCursor(12,10);
  display.setTextSize(2);
  display.setTextColor(SH110X_WHITE);
 display.println("BrainSwarm Robotics Lab");
  display.display();
   
  
}
void loop(){
  
} 
