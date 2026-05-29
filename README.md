# Smart Energy Monitor

## Overview

Smart Energy Monitor is an IoT-based energy monitoring and load control system designed to measure, analyze, and manage electrical energy consumption in real time.

The system uses ESP32 microcontrollers along with voltage and current sensors to monitor electrical parameters of connected appliances. Users can view live data on a 16x2 LCD display, a mobile application, and a web dashboard. The system also allows remote load control and energy consumption tracking for better energy management.

This project is suitable for smart homes, educational purposes, energy auditing, and IoT-based monitoring applications.

---

## Key Features

### Real-Time Monitoring
- Voltage Measurement (V)
- Current Measurement (A)
- Power Measurement (W)
- Energy Consumption (kWh)
- Frequency Measurement (Hz)
- Power Factor (PF / Cos φ)
- Electricity Units Consumed
- Estimated Electricity Cost

### Remote Control
- Turn connected electrical loads ON/OFF remotely
- Mobile-based control using Blynk IoT
- Real-time status updates

### Multi-Platform Monitoring
- 16x2 LCD Display
- Blynk IoT Mobile Application
- Web Dashboard

### Energy Analytics
- Daily energy consumption tracking
- Historical data monitoring
- Consumption trend analysis
- Future consumption prediction through web dashboard

### IoT Connectivity
- Wi-Fi enabled monitoring
- Cloud-based data storage
- Remote access from anywhere

---

## System Architecture

1. Voltage is measured using the ZMPT101B Voltage Sensor.
2. Current is measured using the ACS712 Hall Effect Current Sensor.
3. ESP32 processes sensor data and calculates:
   - Voltage
   - Current
   - Power
   - Energy
   - Frequency
   - Power Factor
   - Electricity Cost
4. Data is displayed on the LCD.
5. Data is sent to:
   - Blynk IoT Mobile App
   - Web Dashboard
6. User can remotely control connected loads through the mobile application.
7. Energy data is stored and analyzed for consumption tracking and prediction.

---

## Components Used

| Component | Quantity |
|------------|-----------|
| ESP32 Development Board | 2 |
| 16x2 LCD Display | 1 |
| I2C LCD Module | 1 |
| ZMPT101B Voltage Sensor | 1 |
| ACS712 Hall Effect Current Sensor | 1 |
| Relay Module | 1 |
| Optocoupler | 1 |
| Breadboard | 1 |
| Jumper Wires | Multiple |
| Power Supply | 1 |

---

## Software and Platforms

### Programming
- Visual Studio Code IDE
- C++

### Mobile Application
- Blynk IoT

### Web Technologies
- HTML
- CSS
- JavaScript
- Using AI  

### Communication
- Wi-Fi
- IoT Cloud Connectivity

---

## Measured Parameters

The system continuously measures:

| Parameter | Unit |
|------------|------|
| Voltage | Volts (V) |
| Current | Amperes (A) |
| Power | Watts (W) |
| Energy | kWh |
| Frequency | Hz |
| Power Factor | PF |
| Electricity Units | kWh |
| Estimated Cost | Currency |

---

## Mobile Application Features

### Blynk IoT Dashboard

- Live Voltage Monitoring
- Live Current Monitoring
- Live Power Monitoring
- Energy Consumption Tracking
- Cost Estimation
- Remote Load Switching
- Real-Time Updates

---

## Web Dashboard Features

### Energy Monitoring

- Daily Energy Consumption
- Historical Data Tracking
- Usage Visualization
- Consumption Statistics

### Prediction System

- Future Energy Consumption Prediction
- Usage Trend Analysis
- Smart Monitoring Insights

---

## Working Principle

The Smart Energy Monitor collects voltage and current data using dedicated sensors connected to the ESP32.

The ESP32 processes the acquired signals and calculates electrical parameters such as power, energy consumed, power factor, and frequency. The calculated data is displayed locally on the LCD display and transmitted over Wi-Fi to the Blynk IoT platform and web dashboard.

The relay module enables remote switching of connected electrical loads through the mobile application. Historical data is stored and used for consumption analysis and prediction.

---

## Applications

- Smart Home Energy Management
- Energy Auditing
- Industrial Monitoring
- Educational Projects
- IoT Research Projects
- Electricity Consumption Tracking
- Remote Appliance Control

---

## Future Improvements

- AI-Based Energy Prediction
- Automatic Load Scheduling
- Smart Billing System
- Mobile Push Notifications
- Google Assistant Integration
- MQTT-Based Communication
- Multi-Load Monitoring
- Solar Energy Integration

---

## Project Demonstration

### Hardware Setup
![Components](images/components.png)

### LCD Output
(Add LCD screenshots here)

### Mobile App Dashboard
(Add Blynk screenshots here)

### Web Dashboard
(Add website screenshots here)

### Working Video
(Add project demo video link here)

---

## Results

The Smart Energy Monitor successfully:

- Measures electrical parameters in real time
- Tracks energy consumption accurately
- Estimates electricity cost
- Displays data on LCD, mobile app, and web dashboard
- Enables remote load control
- Provides energy consumption analysis and prediction

---

## Authors

**Manish Pal**

B.Tech Electronics and Communication Engineering (ECE)

IoT and Embedded Systems Enthusiast

---

## License

This project is developed for educational and research purposes.