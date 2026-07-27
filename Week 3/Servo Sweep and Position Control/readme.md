# Servo Sweep & Position Control

## Overview

This project demonstrates how to interface a **servo motor with an ESP32-S3** and control its angular position using PWM signals.

A servo motor is an actuator that can rotate its shaft to a specific angular position, typically between **0° and 180°**. Unlike a normal DC motor, which continuously rotates when voltage is applied, a servo motor contains an internal control circuit that allows the ESP32-S3 to command a specific position.

In this project, the ESP32-S3 generates the required PWM control signal to move the servo through a range of angles. The servo first sweeps from **0° to 180°** and then returns from **180° to 0°** repeatedly.

This project is part of **Week 3** of the **Brain-Swarm-Lab embedded systems learning roadmap**.

---

## Learning Objectives

- Understand how servo motors work
- Learn the difference between servo motors and DC motors
- Understand PWM-based servo position control
- Interface a servo motor with the ESP32-S3
- Generate control signals for servo positioning
- Control servo angles using Arduino code
- Understand how PWM pulse width determines servo position
- Learn basic actuator control for robotics applications

---

## Hardware Required

| Component | Quantity |
|---|---:|
| ESP32-S3 Development Board | 1 |
| Servo Motor (SG90 or similar) | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

## Wiring Diagram

### Servo to ESP32-S3

| Servo Wire | ESP32-S3 |
|---|---|
| VCC (Red) | 5V / VIN |
| GND (Brown/Black) | GND |
| Signal (Orange/Yellow) | GPIO 2 |

**Note:** Servo wire colors may vary between manufacturers. Always verify the servo datasheet before connecting the wires.

For physical hardware, make sure the servo has a suitable power supply. If the servo draws more current than the ESP32-S3 board can safely provide, use an external 5V supply and connect the **external power supply GND to the ESP32-S3 GND**.

---

## Library Used

For PlatformIO, install:

```ini
     arduino-libraries/Servo@^1.3.0