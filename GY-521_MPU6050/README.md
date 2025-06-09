## GY-521 MPU6050 Setup

This project uses the **GY-521 MPU6050** module to output pitch and roll data via I²C using the DMP (Digital Motion Processor).

---

### 🎥 Credit

Special thanks to [DroneBot Workshop on YouTube](https://www.youtube.com/watch?v=XCyRXMvVSCw) for the excellent setup guide.

---

### 📚 Required Libraries

You’ll need the following libraries from the I2Cdevlib repository:

- [`MPU6050`](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050)  
- [`I2Cdev`](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/I2Cdev)

To install them:
1. Download each folder as a ZIP file (just the `MPU6050` and `I2Cdev` folders — not the whole repo).
2. In the Arduino IDE, go to  
   **Sketch → Include Library → Add .ZIP Library...**
3. Select each ZIP file you downloaded.

Full repo: [https://github.com/jrowberg/i2cdevlib](https://github.com/jrowberg/i2cdevlib)

---

### 🧩 Wiring Diagram

![Wiring Diagram](https://github.com/Luke-Steppens/Components/blob/main/GY-521_MPU6050/Screenshots/Fritz.png?raw=true)

---

### ⚡ Power Notes

Although the MPU6050 chip runs at **3.3V**, the GY-521 breakout board includes an **onboard voltage regulator**, allowing it to be powered directly from the **5V pin on your Arduino**.

- Connect `VCC` on the GY-521 to `5V`, **not 3.3V**
- The regulator steps the voltage down safely for the sensor


---
### 🧪 Test Sketch

To test the sensor:

1. Open the example sketch:  
   `File → Examples → MPU6050 → Examples → MPU6050_DMP6`
2. Set the **Serial Monitor baud rate** to **115200**.
3. Upload the sketch and observe the yaw pitch and roll output.
