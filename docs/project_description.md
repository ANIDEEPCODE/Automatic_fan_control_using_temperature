#  Project Description: Automatic Fan Control using Arduino and LM35

---

# Objective

The goal of this project is to design an **automatic fan control system** that adjusts the fan speed based on the room temperature. This is achieved using an **LM35 temperature sensor** and an **Arduino Uno** to drive a **DC fan** through a transistor using **PWM (Pulse Width Modulation)** signals.

---

# How It Works

- The **LM35 sensor** continuously senses the temperature and outputs an analog voltage.
- The Arduino reads the voltage using its **ADC (Analog to Digital Converter)** on pin **A0**.
- The voltage is converted into temperature in Celsius.
- Based on predefined thresholds:
  - **< 25°C** → Fan is OFF
  - **25–30°C** → Fan runs at medium speed
  - **> 30°C** → Fan runs at full speed
- The fan is controlled using a **transistor switch (NPN)** that receives a PWM signal from pin **D9**.

---

# Hardware Used

| Component       | Purpose                                  |
|----------------|-------------------------------------------|
| Arduino Uno     | Microcontroller                          |
| LM35            | Analog temperature sensor                |
| NPN Transistor (e.g., BC547) | Drives the fan (acts as a switch) |
| DC Fan          | Actuator (cooling system)                |
| Diode (1N4007)  | Flyback protection across the fan        |
| 220Ω Resistor   | Current-limiting for transistor base      |
| Breadboard & Wires | For building the circuit              |

---

# Software Details

- Language: **C++ (Arduino IDE)**
- Functions used:
  - `analogRead()` – for reading LM35 values
  - `analogWrite()` – for sending PWM to control fan speed
  - `Serial.begin()` / `Serial.print()` – for monitoring temperature in the serial monitor

---

# Applications

- Smart cooling systems
- IoT environmental monitoring
- Temperature-based automation in embedded systems

---

# Future Improvements

- Add an **LCD display** to show temperature and fan status.
- Use **temperature thresholds configurable via buttons or UI**.
- Upgrade to a **PID control system** for smooth fan speed variation.
- Integrate with **IoT platforms** for remote monitoring.

---

# About the Author

**Damaraparapu Anideep**  
- Embedded systems enthusiast  
- Completed Embedded Systems course at **Vector India (Hyderabad)**  
- Strong in **C, C++, Linux, RTOS, 8051, Arduino**

GitHub: [ANIDEEPCODE](https://github.com/ANIDEEPCODE)  
Email: damaraparapuanideep@gmail.com  

---

