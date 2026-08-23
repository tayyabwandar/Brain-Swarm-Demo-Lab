# Week 5 - Blockly App Exploration

## Overview

This week, we explored the Blockly-based ESP32 programming application designed and developed by **BrainSwarm Robotics - NSTP**. The application lets users assemble blocks and generate Arduino-style code for the selected board.

## Configuration Observed

- **Selected board:** ESP32-S3
- **Port shown in the status bar:** COM3
- **Generated code:** sets GPIO 2 as an output and prints an empty serial message.

## Screenshot

![Blockly App showing the Error loading ports message](Screenshot%202026-08-23%20133207.png)

## Error Identified

The port selector displays **"Error loading ports"** even though the status bar shows **COM3** and the application status is **Ready**. This indicates that the app is not consistently loading or presenting the available serial ports in the upload interface.

### Likely Cause

The port-discovery process may be failing because the serial-port service, driver, permission, or application-side port enumeration is unavailable. Since COM3 is still shown in the status bar, the error is more likely related to refreshing/populating the port dropdown than to the board selection itself.

### Recommended Checks

1. Confirm that the ESP32-S3 is connected with a data-capable USB cable.
2. Check Windows Device Manager to make sure the board is recognized as **COM3** (or note its current COM port).
3. Install or update the required USB-to-serial driver for the ESP32-S3 board.
4. Close other applications that may already be using the serial port.
5. Restart the Blockly app and use **Refresh** to reload the port list.

## Additional Code Observation

The generated code contains `Serial.print("");`, but it does not show `Serial.begin(...)` in `setup()`. A serial connection should be initialized before printing to the Serial Monitor. For example:

```cpp
void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
}
```

This is a separate serial-monitor configuration issue; the visible application error is the failed port loading message.
