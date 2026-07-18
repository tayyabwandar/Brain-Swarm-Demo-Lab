#include <Arduino.h>
#include <HX711.h>

#define data 15
#define clock 6

HX711 loadcell;

float calibratedfactor = 1000.51;

void setup()
{

  Serial.begin(115200);
  loadcell.begin(data, clock);
  Serial.println("Sensor Started!");
  loadcell.set_scale(calibratedfactor);
  loadcell.tare();
}
void loop()
{
  Serial.println("Weight:");
  Serial.print(loadcell.get_units(), 2);
  Serial.println("Kg");
  delay(2000);
}