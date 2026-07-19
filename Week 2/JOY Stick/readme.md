# Analog Joystick (KY-023)



# Overview

This project demonstrates how to interface a **KY-023 Analog Joystick Module** with an **ESP32-S3** using the Arduino framework.

The joystick contains **two potentiometers** that measure movement along the **X-axis** and **Y-axis**, along with a **push button** that is activated by pressing the joystick downward.

The ESP32 continuously reads the joystick's position and button state, displaying the values on the Serial Monitor.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand analog input using the ESP32 ADC
- Read X-axis and Y-axis values
- Read digital button input
- Learn how potentiometers work
- Interface analog sensors with ESP32-S3
- Display sensor values on the Serial Monitor

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| KY-023 Analog Joystick Module | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

| Joystick Pin | ESP32-S3 |
|--------------|----------|
| VCC | 3.3V |
| GND | GND |
| VRx | GPIO 11 |
| VRy | GPIO 16 |
| SW | GPIO 8 |

---

# Library Used

No external library is required.

```cpp
#include <Arduino.h>
```

---

# Pin Configuration

```cpp
#define VertPin 11
#define HorzPin 16
#define SelPin 8
```

---

# Features

- Reads X-axis position
- Reads Y-axis position
- Detects joystick button press
- Analog and digital input
- Simple interface
- Beginner-friendly

---

# Project Structure

```
Joystick/
│
├── src/
│   └── main.cpp
│
├── platformio.ini
│
└── README.md
```

---

# Sample Output

```
X : 2048
Y : 2015
Button : Released

------------------------

X : 3950
Y : 2100
Button : Released

------------------------

X : 2045
Y : 105
Button : Pressed
```

---

# How It Works

1. The joystick contains **two potentiometers** placed at right angles.
2. Moving the joystick changes the resistance of each potentiometer.
3. The potentiometers produce varying analog voltages.
4. ESP32 converts these voltages into digital values using its **ADC (Analog-to-Digital Converter)**.
5. The push button outputs:
   - **HIGH** → Released
   - **LOW** → Pressed (using INPUT_PULLUP)
6. The values are displayed on the Serial Monitor.

---

# Understanding the Outputs

### X-Axis

Controls left and right movement.

```
Left      Center      Right

0 ------ 2048 ------ 4095
```

---

### Y-Axis

Controls up and down movement.

```
Down      Center       Up

0 ------ 2048 ------ 4095
```

---

### Push Button

```
Released → HIGH

Pressed → LOW
```

---

# Applications

- Robot Control
- Drone Controller
- RC Vehicles
- Game Controllers
- Camera Gimbals
- Menu Navigation
- Embedded User Interfaces

---

# Troubleshooting

### X or Y Always Zero

- Verify analog pin connections.
- Ensure GPIOs support ADC.
- Check wiring.

---

### Button Never Changes

- Use `INPUT_PULLUP`.
- Verify SW pin connection.
- Check push button wiring.

---

### Unstable Readings

- Avoid loose jumper wires.
- Keep the joystick centered before reading.
- Average multiple ADC samples for smoother values.

---

### No Output

- Verify Serial Monitor baud rate (115200).
- Confirm correct GPIO pin numbers.
- Ensure ESP32-S3 is powered correctly.

---

# Future Improvements

- Control a servo motor
- Drive a robot car
- Move a cursor on an OLED display
- Wireless joystick using ESP-NOW
- Build a game controller
- Integrate with Bluetooth

---

# References

- KY-023 Joystick Datasheet
- ESP32-S3 Documentation
- Arduino Analog Input Reference

---



## Author

**Muhammad Tayyab**

