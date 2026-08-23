# PIR Motion-Triggered Smart Light

An ESP32-S3 project that turns on a light when a PIR sensor detects movement, then turns it off after 10 seconds without detected motion. It is designed for a PlatformIO project and includes a Wokwi simulation diagram.

## How it works

1. The ESP32-S3 reads the PIR sensor output on GPIO 2.
2. When motion is detected, the LED turns on and the 10-second timer resets.
3. If no further motion is detected for 10 seconds, the LED turns off.
4. Status messages are printed to the serial monitor at 9600 baud.

## Components

- ESP32-S3 DevKitC-1
- PIR motion sensor
- LED
- 220 &Omega; resistor
- Jumper wires

## Wiring

| Component | ESP32-S3 connection |
| --- | --- |
| PIR VCC | 3.3V |
| PIR GND | GND |
| PIR OUT | GPIO 2 |
| LED circuit | GPIO 1 through a 220 &Omega; resistor |

The LED circuit in `diagram.json` is active-low: GPIO 1 is driven `LOW` to turn the LED on and `HIGH` to turn it off.

## Run the project

### PlatformIO

Open this folder in PlatformIO, then build and upload:

```bash
pio run
pio run --target upload
pio device monitor --baud 9600
```

### Wokwi

Open the project folder in Wokwi. Use the PIR sensor control in the simulator to trigger motion and observe the LED and serial messages.

## Expected serial output

```text
Smart Light Started
Motion detected - Light ON
No motion - Light OFF
```

## Project structure

```text
src/main.cpp   # Motion detection and light-control logic
diagram.json   # Wokwi circuit diagram
platformio.ini # ESP32-S3 PlatformIO configuration
```
