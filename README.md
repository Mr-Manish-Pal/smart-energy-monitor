# ⚡ Smart Energy Monitor using ESP32

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue)
![IoT](https://img.shields.io/badge/Technology-IoT-green)
![Platform](https://img.shields.io/badge/Platform-Blynk-orange)
![Language](https://img.shields.io/badge/Language-C++-purple)
![License](https://img.shields.io/badge/License-Educational-red)

An advanced IoT-based Energy Monitoring and Load Control System built using ESP32 that measures electrical parameters in real-time, tracks energy consumption, estimates electricity costs, and allows remote appliance control through Blynk IoT and a Web Dashboard.

# 👨‍💻 Author

## Manish Pal

**B.Tech – Electronics & Communication Engineering (ECE)**

Passionate about:

- Embedded Systems
- ESP32 Development
- Internet of Things (IoT)
- Automation Systems
- Energy Monitoring Solutions

# 🎥 Project Demonstration

## Watch Full Working Video

# 🎥 Project Demonstration

[![Smart Energy Monitor Demo](https://img.youtube.com/vi/8EZps-X8OYU/maxresdefault.jpg)](https://youtu.be/8EZps-X8OYU?si=6dURpgtVdiJmBxAM)

👉 **Click the thumbnail above to watch the full project demonstration video.**

---

# 📖 Project Overview

Electricity consumption monitoring has become an important requirement in modern homes, industries, and smart buildings. Traditional electricity meters only provide total energy consumption and do not offer detailed insights into real-time power usage.

The Smart Energy Monitor solves this problem by continuously monitoring electrical parameters such as voltage, current, power, energy consumption, frequency, and power factor. The collected data is processed by ESP32 microcontrollers and transmitted to cloud platforms for remote monitoring and analysis.

Users can view live data on:

- 📟 LCD Display
- 📱 Blynk IoT Mobile Application
- 🌐 Web Dashboard

The system also enables remote load switching, allowing users to control connected appliances from anywhere using an internet connection.

---

# ✨ Key Features

## 📊 Real-Time Electrical Monitoring

The system continuously measures:

- Voltage (V)
- Current (A)
- Power (W)
- Energy Consumption (kWh)
- Frequency (Hz)
- Power Factor (PF)
- Electricity Units Consumed
- Estimated Electricity Cost

---

## 📱 Remote Appliance Control

Using the Blynk IoT mobile application, users can:

- Turn appliances ON remotely
- Turn appliances OFF remotely
- Monitor appliance status
- Receive real-time updates

---

## 🌐 Multi-Platform Monitoring

Energy data can be viewed through:

### LCD Display
- Live electrical parameters
- Local monitoring without internet

### Blynk Mobile App
- Real-time data visualization
- Appliance control
- Historical values

### Web Dashboard
- Detailed analytics
- Consumption trends
- Historical records
- Future prediction system

---

## 📈 Energy Analytics

The system provides:

- Daily Consumption Tracking
- Weekly Consumption Analysis
- Monthly Energy Reports
- Usage Statistics
- Consumption Trend Analysis
- Future Consumption Prediction

---

## ☁️ IoT Cloud Connectivity

Features include:

- Wi-Fi Connectivity
- Cloud Data Storage
- Remote Monitoring
- Real-Time Synchronization
- Anywhere Access


# ⚙️ Working Principle

### Step 1: Voltage Measurement

The ZMPT101B Voltage Sensor measures AC mains voltage and sends analog signals to the ESP32.

### Step 2: Current Measurement

The ACS712 Hall Effect Current Sensor measures load current flowing through the connected appliance.

### Step 3: Data Processing

ESP32 processes sensor readings and calculates:

- Voltage
- Current
- Active Power
- Energy Consumption
- Frequency
- Power Factor
- Electricity Cost

### Step 4: Local Display

All calculated parameters are displayed on the 16x2 LCD display.

### Step 5: Cloud Communication

The ESP32 sends processed data to:

- Blynk IoT Cloud
- Web Dashboard

using Wi-Fi connectivity.

### Step 6: Remote Control

Users can switch connected appliances ON/OFF using the Blynk mobile application.

### Step 7: Analytics & Prediction

Historical energy data is stored and analyzed to identify usage trends and predict future energy consumption.

---


# 💻 Software & Technologies Used

## Programming

- C++
- Arduino Framework
- Visual Studio Code

## IoT Platform

- Blynk IoT

## Web Development

- HTML
- CSS
- JavaScript

## Communication

- Wi-Fi
- Cloud Connectivity

## AI Integration

- Energy Prediction Algorithms
- Consumption Trend Analysis

---


This video demonstrates:

- Live Voltage Monitoring
- Current Measurement
- Power Calculation
- Energy Tracking
- Cost Estimation
- LCD Display Output
- Blynk Mobile Application
- Web Dashboard
- Remote Load Control


# ⭐ Support

If you found this project useful:

⭐ Star this repository

🍴 Fork this repository

📢 Share it with others

---

# 📄 License

This project is developed for educational, learning, and research purposes.

© 2026 Manish Pal. All Rights Reserved.