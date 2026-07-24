#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SDA_PIN 37
#define SCL_PIN 36

#define DHT_PIN 13
#define DHT_TYPE DHT22

Adafruit_SSD1306 oled(128, 64, &Wire, -1);
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {

  Serial.begin(115200);
  Wire.begin(SDA_PIN, SCL_PIN);

  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while(true);
  }

  
  dht.begin();

  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setTextColor(SSD1306_WHITE);
  oled.setCursor(0,0);
  oled.println("Starting...");
  oled.display();

  delay(2000);
}


void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();


  if(isnan(temperature) || isnan(humidity)){
    Serial.println("DHT ERROR");
    return;
  }


  Serial.print("Temp: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);


  oled.clearDisplay();

  oled.setTextSize(1);
  oled.setCursor(0,0);
  oled.println("DHT22 Sensor");

  oled.setTextSize(2);

  oled.setCursor(0,20);
  oled.print("T:");
  oled.print(temperature);
  oled.println("C");


  oled.setCursor(0,45);
  oled.print("H:");
  oled.print(humidity);
  oled.println("%");


  oled.display();

  delay(2000);
}