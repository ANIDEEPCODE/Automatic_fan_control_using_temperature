# 🌬️ Automatic Fan Control using LM35 and Arduino

This project automatically controls the speed of a fan based on the surrounding temperature using an LM35 temperature sensor and Arduino.

---

## 📌 Features

- Real-time temperature monitoring using LM35
- Automatic fan speed control using PWM
- Serial output for temperature logs
- Simple and efficient embedded system design

---

## 🧰 Components Used

| Component       | Description                |
|----------------|----------------------------|
| Arduino Uno     | Microcontroller board       |
| LM35 Sensor     | Analog temperature sensor   |
| DC Fan          | Controlled by transistor    |
| NPN Transistor  | Acts as a switch (e.g., BC547) |
| Flyback Diode   | Protects from voltage spikes |
| Resistors, wires | Breadboard and jumper wires |

---

## ⚙️ Working Principle

- LM35 outputs 10mV per °C.
- Arduino reads the analog voltage → converts to temperature.
- Based on temperature:
  - **< 25°C** → Fan OFF
  - **25–30°C** → Fan at half speed
  - **> 30°C** → Fan at full speed

---

## 🔌 Circuit Diagram

![Circuit Diagram](docs/circuit_diagram.png)

> Note: Use a transistor to safely drive the fan from Arduino's PWM pin.

---

## 🧠 Code Logic (main.ino)

```cpp
const int lm35Pin = A0;
const int fanPin = 9;

void setup() {
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(lm35Pin);
  float tempC = analogValue * (5.0 / 1023.0) * 100;

  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC < 25) {
    analogWrite(fanPin, 0); // Fan OFF
  } else if (tempC >= 25 && tempC <= 30) {
    analogWrite(fanPin, 128); // Medium speed
  } else {
    analogWrite(fanPin, 255); // Full speed
  }

  delay(1000); // 1 second delay
}

🚀 How to Run
*Connect the LM35 sensor to A0.
*Connect a transistor + fan to pin D9.
*Upload the code using Arduino IDE.
*Open Serial Monitor to see the temperature log
*Fan speed adjusts automatically with temp changes.

📬 Contact
Damaraparapu Anideep
🔗 GitHub: ANIDEEPCODE
📧 Email: damaraparapuanideep@gmail.com


