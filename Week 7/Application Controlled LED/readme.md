# Application-Controlled LED and Sensor API

This ESP32-S3 project joins a Wi-Fi network, starts a small HTTP server, controls an LED, and returns DHT11 temperature and humidity readings as JSON. A phone, web application, or another client on the same network can call the endpoints after using the IP address printed in the Serial Monitor.

## Hardware and libraries

- ESP32-S3 DevKitC-1
- LED on GPIO 2
- DHT11 on GPIO 4
- WiFi, WebServer, DHT sensor library, and Adafruit Unified Sensor

The dependencies are listed in platformio.ini.

## API endpoints

| Request | Result |
| --- | --- |
| GET /led/on | Sets GPIO 2 HIGH and returns {"success":true,"led":true}. |
| GET /led/off | Sets GPIO 2 LOW and returns {"success":true,"led":false}. |
| GET /sensors | Returns temperature, humidity, sensor-read time, and processing time as JSON. |

## Run it

1. Update the Wi-Fi SSID and password in src/main.cpp for the intended network.
2. Build and upload the firmware.
3. Open the Serial Monitor at 9600 baud and wait for the device IP address.
4. From a client on the same network, request http://DEVICE_IP/led/on, http://DEVICE_IP/led/off, or http://DEVICE_IP/sensors.

## Expected behaviour

The LED begins off. Calling /led/on turns it on and /led/off turns it off. A successful /sensors response has this shape:

    {"success":true,"temperature":25.0,"humidity":50.0,"sensor_time":12345,"processing_time":2}

If the DHT11 cannot be read, /sensors returns HTTP 500 with {"success":false}.

## Learning outcomes

- Connect an ESP32 to Wi-Fi in station mode.
- Serve simple HTTP GET endpoints with WebServer.
- Control a GPIO from an application request.
- Return sensor readings in a JSON response.

## Demo video

[Watch the recorded demonstration](<WhatsApp Video 2026-09-17 at 6.20.48 AM.mp4>).
