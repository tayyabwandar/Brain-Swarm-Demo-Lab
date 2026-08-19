#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <DHT.h>

const char* ssid = "Smart University";
const char* password = "";

WebServer server(80);

#define LED_PIN 2

#define DHT_PIN 4
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {

    Serial.begin(115200);
    delay(1000);

    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);

    dht.begin();

    
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);

    Serial.print("Connecting to WiFi");

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.println("WiFi Connected!");

    Serial.print("ESP32 IP Address: ");
    Serial.println(WiFi.localIP());


    
    server.on("/led/on", HTTP_GET, []() {

        digitalWrite(LED_PIN, HIGH);

        server.send(
            200,
            "application/json",
            "{\"success\":true,\"led\":true}"
        );
    });


  
    server.on("/led/off", HTTP_GET, []() {

        digitalWrite(LED_PIN, LOW);

        server.send(
            200,
            "application/json",
            "{\"success\":true,\"led\":false}"
        );
    });


  
    server.on("/sensors", HTTP_GET, []() {

        float temperature = dht.readTemperature();
        float humidity = dht.readHumidity();

        if (isnan(temperature) || isnan(humidity)) {

            server.send(
                500,
                "application/json",
                "{\"success\":false\"}"
            );

            return;
        }

        String json = "{";

        json += "\"temperature\":";
        json += String(temperature, 1);

        json += ",\"humidity\":";
        json += String(humidity, 1);

        json += "}";

        server.send(
            200,
            "application/json",
            json
        );
    });


    server.begin();

    Serial.println("HTTP server started!");
}


void loop() {

    server.handleClient();
}