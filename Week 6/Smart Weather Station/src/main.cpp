#include <Arduino.h>
#include <Wire.h>
#include <DHT.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>



#define DHT_PIN 35
#define DHT_TYPE DHT22

#define OLED_SDA 38
#define OLED_SCL 39

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_ADDRESS 0x3C



DHT dht(DHT_PIN, DHT_TYPE);

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  -1
);




void setup() {

  Serial.begin(115200);

  
  dht.begin();

  
  Wire.begin(OLED_SDA, OLED_SCL);

  
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {

    Serial.println("OLED initialization failed!");

    while (true) {
      delay(1000);
    }
  }

  
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  display.setCursor(20, 20);
  display.println("Weather Station");

  display.setCursor(30, 35);
  display.println("Starting...");

  display.display();

  delay(2000);

  Serial.println("================================");
  Serial.println("      MINI WEATHER STATION");
  Serial.println("================================");
}




void loop() {

  
  float temperature = dht.readTemperature();

  
  float humidity = dht.readHumidity();


  
  if (isnan(temperature) || isnan(humidity)) {

    Serial.println("Failed to read DHT22!");

    display.clearDisplay();

    display.setTextSize(1);

    display.setCursor(10, 20);
    display.println("DHT22 Error!");

    display.setCursor(10, 40);
    display.println("Check sensor");

    display.display();

    delay(2000);

    return;
  }


  

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("-----------------------------");


  // -----------------------------
  // Display on OLED
  // -----------------------------

  display.clearDisplay();

  display.setTextColor(SSD1306_WHITE);

  // Title
  display.setTextSize(1);
  display.setCursor(25, 0);
  display.println("WEATHER STATION");

  // Temperature
  display.setTextSize(2);
  display.setCursor(0, 20);

  display.print("T:");
  display.print(temperature, 1);
  display.println(" C");

  // Humidity
  display.setCursor(0, 45);

  display.print("H:");
  display.print(humidity, 1);
  display.println("%");

  display.display();


  // Wait before next reading
  delay(2000);
}