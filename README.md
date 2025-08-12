# Air-Mouse
The ESP32 Air Mouse is a motion-controlled wireless mouse that uses an MPU-6050 accelerometer + gyroscope to detect hand movements and translate them into on-screen cursor movements. By leveraging the BLE (Bluetooth Low Energy) HID capabilities of the ESP32, it functions like a standard Bluetooth mouse — without the need for a USB dongle. 
# 🖱️ ESP32 Air Mouse – Motion-Controlled Bluetooth Mouse

## 📌 Features
- Wireless motion-controlled cursor movement  
- Left and right click buttons  
- Bluetooth HID – no dongle required  
- Adjustable sensitivity in code  
- Compatible with **Windows, macOS, Linux, and Android**  
- Optional battery power for portability  

## 🛠 Components Required
| Component | Quantity | Notes |
|-----------|----------|-------|
| ESP32 DevKit V1 | 1 | BLE-enabled development board |
| MPU6050 Sensor | 1 | Accelerometer + gyroscope |
| Push Buttons | 2 | For left and right click |
| Li-ion Battery | 1 | Optional, for portable use |
| Breadboard & Wires | - | For prototyping |

## 🔌 Circuit Connections

### MPU6050 → ESP32
| MPU6050 Pin | ESP32 Pin |
|-------------|-----------|
| VCC         | 3.3V or 5V (depends on module) |
| GND         | GND |
| SDA         | GPIO 21 |
| SCL         | GPIO 22 |

### Buttons → ESP32
| Button | ESP32 Pin | Other Side |
|--------|-----------|------------|
| Left Click | GPIO 15 | GND |
| Right Click | GPIO 4 | GND |

## 📦 Arduino Libraries Needed
Install these from the Arduino IDE Library Manager:
1. **[ESP32 BLE Mouse](https://github.com/T-vK/ESP32-BLE-Mouse)** by T-vK  (download the library and go to the arduino platform-->Sketch-->include library-->add.Zip library)
2. **MPU6050** by Electronic Cats or Jeff Rowberg  
3. **Wire** (built-in)

  delay(20);
}
