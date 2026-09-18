# ESP32 Blink LED

This project demonstrates how to control an external LED using the ESP32. The LED is connected to **GPIO 2** through a **220Ω resistor** and blinks continuously. This is one of the first projects beginners learn in embedded systems because it introduces GPIO programming and digital output control.

---

## Circuit Components

- ESP32 Development Board
- LED
- 220Ω Resistor
- Jumper Wires
- Wokwi Simulator
- PlatformIO

---

## Circuit Diagram

![Circuit Diagram](ScreenShots/1.png)

---

## Concepts

### GPIO (General Purpose Input/Output)

GPIO pins allow the ESP32 to communicate with external hardware. A GPIO pin can be configured as an **input** (to read buttons or sensors) or an **output** (to control LEDs, relays, buzzers, etc.).

In this project, **GPIO 2** is configured as an output.

---

### `pinMode()`

The `pinMode()` function configures how a GPIO pin will be used.

```cpp
pinMode(2, OUTPUT);
```

This tells the ESP32 that GPIO 2 will send voltage to control the LED.

---

### `digitalWrite()`

The `digitalWrite()` function changes the state of the output pin.

```cpp
digitalWrite(2, HIGH);
```

- **HIGH** → Outputs 3.3V, turning the LED ON.
- **LOW** → Outputs 0V, turning the LED OFF.

---

### `delay()`

The `delay()` function pauses program execution.

```cpp
delay(1000);
```

A value of **1000 milliseconds** means the program waits for **1 second** before executing the next instruction.

---

### Serial Monitor

The Serial Monitor displays messages from the ESP32, making it easier to debug programs.

```cpp
Serial.println("Starting");
```

---

## Steps

1. Open the project in VS Code.
2. Build the project using PlatformIO.
3. Start the Wokwi simulation.
4. Observe the LED blinking every second.
5. Open the Serial Monitor to verify the program starts successfully.

---

## Expected Output

### Wokwi Simulation

![Blink LED Running](ScreenShots/2.png)

### Serial Monitor

The Serial Monitor displays:

```text
Starting
```

The LED continuously turns **ON** for one second and **OFF** for one second.

---



## Learning Outcomes

After completing this project, you will understand:

- What GPIO pins are
- How to configure a GPIO as an output
- How to control an external LED
- The purpose of a current-limiting resistor
- How `digitalWrite()` works
- How `delay()` controls timing
- How to simulate ESP32 circuits using Wokwi

---

## Author

**Muhammad Tayyab**  

---

## Demo video

[Watch the recorded demonstration](<BlinkLed.mp4>).
