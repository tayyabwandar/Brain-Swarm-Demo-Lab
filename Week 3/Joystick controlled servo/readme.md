# Joystick-Controlled Servo

This project demonstrates how to control the position of a servo motor using the **X-axis of a joystick** connected to an ESP32.

The ESP32 continuously reads the analog value from the joystick and maps it to a servo angle. As the joystick moves from left to right, the servo motor moves from approximately **0° to 180°**.

This project demonstrates how an **analog input** can be processed by a microcontroller and converted into a **physical movement**.

---

## Components Required

- ESP32 Development Board
- Joystick Module
- Servo Motor
- Jumper Wires
- Wokwi Simulator
- PlatformIO

---

## Circuit Diagram

![Joystick Servo Circuit]()

---

## Concepts

### Joystick Module

A joystick module can be used as an input device to control electronic systems.

The joystick typically provides:

- **X-axis** → Horizontal movement
- **Y-axis** → Vertical movement
- **SEL** → Push-button input

In this project, only the **X-axis** is used to control the servo.

---

### Analog Input

The joystick's X-axis produces an analog voltage that changes when the joystick is moved.

The ESP32 reads this voltage using its **ADC (Analog-to-Digital Converter)**.

```cpp
int joystickValue = analogRead(joystickX);
```

The ESP32 converts the analog voltage into a digital value that the program can process.

---

### ADC (Analog-to-Digital Converter)

The ADC converts the joystick's changing analog voltage into a digital number.

For a typical ESP32 ADC:

```text
Joystick Left    → Low ADC Value
Joystick Center  → Middle ADC Value
Joystick Right   → High ADC Value
```

This value is then used to determine the servo position.

---

### Mapping Joystick Input to Servo Angle

The joystick ADC value is mapped to the servo's angle range.

```cpp
int angle = map(joystickValue, 0, 4095, 0, 180);
```

The mapping works approximately like this:

| Joystick Position | Servo Angle |
|---|---:|
| Left | 0° |
| Center | 90° |
| Right | 180° |

Therefore, moving the joystick changes the servo angle in real time.

---

### Servo Motor

A servo motor is an actuator that can rotate to a specific angular position.

Unlike a normal DC motor, a servo can be commanded to move to a particular angle.

In this project:

```text
Joystick
   │
   │ Analog Input
   ▼
 ESP32
   │
   │ PWM Control
   ▼
 Servo Motor
```

The ESP32 reads the joystick position and sends the corresponding control signal to the servo.

---

### PWM Control

Servo motors are controlled using timed electrical pulses. The width of these pulses determines the desired servo position.

The ESP32 generates the required control signal, allowing the servo to move to the requested angle.

The **ESP32Servo** library simplifies servo control.

---

## Steps

1. Open the project in VS Code using PlatformIO.
2. Build the project.
3. Start the Wokwi simulation.
4. Move the joystick along the X-axis.
5. Observe the changing joystick value.
6. The ESP32 maps the joystick value to an angle between **0° and 180°**.
7. Observe the servo moving according to the joystick position.

---

## Expected Output

### Circuit Diagram

![Joystick Servo Circuit]()

### Simulation Output

![Joystick Servo Output]()

When the joystick is moved:

```text
Joystick Left    → Servo ≈ 0°
Joystick Center  → Servo ≈ 90°
Joystick Right   → Servo ≈ 180°
```

The servo follows the joystick movement in real time.

---

## System Flow

```text
┌───────────────┐
│   Joystick    │
│    X-Axis     │
└───────┬───────┘
        │
        │ Analog Value
        ▼
┌───────────────┐
│     ESP32     │
│               │
│  Read ADC     │
│      ↓        │
│  Map 0–4095   │
│      ↓        │
│  Map to 0–180°│
└───────┬───────┘
        │
        │ Servo Control Signal
        ▼
┌───────────────┐
│ Servo Motor   │
│               │
│  0° ← → 180°  │
└───────────────┘
```

---

## Project Structure

```text
Joystick Controlled Servo/
├── src/
│   └── main.cpp
├── platformio.ini
├── diagram.json
├── wokwi.toml
└── README.md
```

---

## Learning Outcomes

After completing this project, you will understand:

- How a joystick works as an analog input device
- How to read analog values using the ESP32 ADC
- How `analogRead()` works
- How to map one numerical range to another using `map()`
- How to control a servo motor
- How PWM is used for servo control
- How to connect an input device to an actuator
- How to create real-time interaction between a joystick and servo
- How to simulate the project using Wokwi

---

## STEM Team Task

This project is **Demo 3** of the Week 3 STEM Team Task.

The four demos are completed in the following order:

1. **Servo Sweep & Position Control**
2. **Smart Traffic-Light Controller**
3. **Joystick-Controlled Servo/Motor Rig** ← This Project
4. **Interactive OLED Dashboard**

Each demo is simulated and tested in **Wokwi** before moving to the next hardware demo.

---

## Author

**Muhammad Tayyab**
