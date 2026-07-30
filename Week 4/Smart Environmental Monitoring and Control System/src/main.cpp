#include <Arduino.h>
#include <Servo.h>
#include <Adafruit_SH110X.h>
#include <Wire.h>
#include <DHT.h>


DHT dht(11,DHT22);
Servo servo;

Adafruit_SH1106G display(128, 64, &Wire, -1);

unsigned long prevoiusMilis =0;
const unsigned interval = 1000;
float temperature = 0;
float Humidity = 0;

void oledSetup()
{
  display.begin(0x3C, true);
  display.setTextSize(2);

  display.setTextColor(SH110X_WHITE);
  display.print("Starting");
  display.clearDisplay();
};
void servoSetup()
{
  servo.attach(41);
};
void dhtSetup()

{
  dht.begin();
}

void setup()
{
  Wire.begin(36, 35);
  pinMode(11,INPUT);
  pinMode(6, INPUT);
  Serial.begin(115200);
  Serial.print("Smart Environmental Monitoring and Control System");
  dhtSetup();
  oledSetup();
  servoSetup();
}

void oled()
{
  temperature = dht.readTemperature();

  Humidity = dht.readHumidity();

  display.clearDisplay();
  display.setCursor(0, 0);

  if (isnan(temperature) || isnan(Humidity))
  {
    display.print("Fail to get values");
    Serial.print(Humidity);
  }
  else
  {

    display.print("Temperature:");
    display.println(temperature);
    display.print("Humidity:");
    display.print(Humidity);
    delay(20);

    if (temperature < 25)
    {
      display.print("Cold");
    }
    else if (temperature == 25)
    {
      display.print("Room Temperature");
    }
    else
    {
      display.print("Hot");
    }
    display.display();
  }
}

void servoFun()
{
  int JoystickValuesX = analogRead(6);
  int angle = map(JoystickValuesX, 0, 4095, 0, 90);
  if(temperature!=25){
    if (temperature < 25 && Humidity>30)
  {

    servo.write(0);
  }
  if (temperature > 25 && Humidity<30)
    servo.write(90);
  }
  else{
    servo.write(angle);
  }
  
}



void loop()
{

unsigned long currentMilis = millis();

if(currentMilis-prevoiusMilis>interval){

prevoiusMilis=currentMilis;
oled();
servoFun();

}
  
};