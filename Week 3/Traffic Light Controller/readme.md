# Smart Traffic-Light Controller

This project demonstrates a basic traffic-light control system using an ESP32 and three LEDs. The ESP32 controls the **Red, Green, and Yellow LEDs** according to a realistic timed sequence.

The traffic light follows this sequence continuously:

```text
RED → 5 seconds
GREEN → 5 seconds
YELLOW → 2 seconds
        ↓
      Repeat
```

This project introduces the concept of **sequential control**, where an embedded system performs different actions in a predefined order and timing.

---

## Components Required

- ESP32 Development Board
- Red LED
- Green LED
- Yellow LED
- 3 × 220Ω Resistors
- Jumper Wires
- Wokwi Simulator
- PlatformIO

---

## Circuit Diagram

![Traffic Light Circuit]()

---

## Concepts

### Traffic Light Controller

A traffic-light controller is an example of a simple embedded control system. The microcontroller controls multiple outputs according to a predefined sequence.

In this project, the ESP32 acts as the controller and the three LEDs represent the traffic lights.

```text
             ESP32
               │
       ┌───────┼───────┐
       │       │       │
       ▼       ▼       ▼
     RED     GREEN   YELLOW
      5s       5s       2s
       │       │       │
       └───────┴───────┘
              Repeat
```

---

### GPIO Output

Each LED is connected to a separate GPIO pin configured as an output.

```cpp
pinMode(redLED, OUTPUT);
pinMode(greenLED, OUTPUT);
pinMode(yellowLED, OUTPUT);
```

The ESP32 controls each LED by setting its GPIO pin to `HIGH` or `LOW`.

---

### `digitalWrite()`

The `digitalWrite()` function controls whether an LED is ON or OFF.

```cpp
digitalWrite(redLED, HIGH);
```

- `HIGH` → LED ON
- `LOW` → LED OFF

For example, to turn the red light ON:

```cpp
digitalWrite(redLED, HIGH);
digitalWrite(greenLED, LOW);
digitalWrite(yellowLED, LOW);
```

---

### Timing and Sequence

The traffic light follows a fixed timing sequence.

| Traffic Light | Duration |
|---|---:|
| 🔴 Red | 5 seconds |
| 🟢 Green | 5 seconds |
| 🟡 Yellow | 2 seconds |

After the yellow light finishes, the sequence starts again from the red light.

---

### `delay()`

The `delay()` function is used to keep each traffic light active for a specific amount of time.

```cpp
delay(5000);
```

This pauses the program for **5000 milliseconds**, which is equal to **5 seconds**.

For the yellow light:

```cpp
delay(2000);
```

This creates a **2-second** delay.

---

## Traffic Light Sequence

The complete sequence is:

```text
┌──────────────┐
│  RED ON      │
│  5 seconds   │
└──────┬───────┘
       │
       ▼
┌──────────────┐
│  GREEN ON    │
│  5 seconds   │
└──────┬───────┘
       │
       ▼
┌──────────────┐
│  YELLOW ON   │
│  2 seconds   │
└──────┬───────┘
       │
       └──────────► Repeat
```

Only one traffic light is ON at a time.

---

## Steps

1. Open the project in VS Code using PlatformIO.
2. Build the project.
3. Start the Wokwi simulation.
4. Observe the three LEDs.
5. The red LED remains ON for 5 seconds.
6. The green LED turns ON for 5 seconds.
7. The yellow LED turns ON for 2 seconds.
8. The sequence repeats continuously.

---

## Expected Output

### Circuit Diagram

![Traffic Light Circuit]()

### Simulation Output

![Traffic Light Simulation]()

The LEDs operate in the following sequence:

```text
RED    → 5 seconds
GREEN  → 5 seconds
YELLOW → 2 seconds
         ↓
       Repeat
```

The system continuously cycles through the traffic-light sequence.

---

## Project Structure

```text
Smart Traffic Light Controller/
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

- How to control multiple GPIO outputs
- How to control multiple LEDs using an ESP32
- How sequential control systems work
- How to implement timed events
- How to use `digitalWrite()`
- How to use `delay()` for timing
- How to design a simple traffic-light sequence
- How to simulate embedded systems using Wokwi

---

## STEM Team Task

This project is **Demo 2** of the Week 3 STEM Team Task.

The four demos are completed in the following order:

1. **Servo Sweep & Position Control**
2. **Smart Traffic-Light Controller** ← This Project
3. **Joystick-Controlled Servo/Motor Rig**
4. **Interactive OLED Dashboard**

Each demo is simulated and tested in **Wokwi** before moving to the next hardware demo.

---

## Author

**Muhammad Tayyab**