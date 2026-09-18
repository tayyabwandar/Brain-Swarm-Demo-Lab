# Smart Weather Station

An ESP32-S3 weather station that reads temperature and humidity from a DHT22 sensor, shows the measurements on a 128x64 I2C OLED display, and logs them to the serial monitor.

## Features

- Reads temperature in degrees Celsius and relative humidity from a DHT22.
- Refreshes the display and serial readings every two seconds.
- Shows a startup screen while the device initializes.
- Displays a clear error message if the DHT22 cannot be read.

## Components

- ESP32-S3 DevKitC-1
- DHT22 temperature and humidity sensor
- 128x64 SSD1306 I2C OLED display (address `0x3C`)
- Jumper wires

## Wiring

| Component | ESP32-S3 connection |
| --- | --- |
| DHT22 VCC | 3.3V |
| DHT22 GND | GND |
| DHT22 DATA | GPIO 35 |
| OLED VCC | 3.3V |
| OLED GND | GND |
| OLED SDA | GPIO 38 |
| OLED SCL | GPIO 39 |

## How it works

After startup, the ESP32-S3 initializes the DHT22 and OLED display. Every two seconds it reads the sensor, prints the temperature and humidity at 115200 baud, and refreshes the OLED with values rounded to one decimal place. If either sensor value is invalid, the OLED displays a DHT22 error message instead.

## Run the project

### PlatformIO

Open this folder in PlatformIO, then build, upload, and open the serial monitor:

```bash
pio run
pio run --target upload
pio device monitor --baud 115200
```

The required libraries are declared in `platformio.ini` and will be installed by PlatformIO:

- DHT sensor library
- Adafruit SSD1306
- Adafruit GFX Library

### Wokwi

Open the project folder in Wokwi and start the simulation. The display shows the current simulated DHT22 temperature and humidity, while the same values appear in the serial monitor.

## Example serial output

```text
================================
      MINI WEATHER STATION
================================
Temperature: 24.0 C
Humidity: 40.0 %
-----------------------------
```

## Project structure

```text
src/main.cpp   # Sensor reading, OLED display, and serial output
diagram.json   # Wokwi circuit diagram
platformio.ini # ESP32-S3 configuration and library dependencies
```

---

## Demo video

[Watch the recorded demonstration](<WhatsApp Video 2026-09-18 at 8.32.29 AM.mp4>).
