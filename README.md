# 🤖 f-tobot




<p align="center">
  <img width="1536" height="1024" alt="ChatGPT Image 1 فبراير 2026، 06_20_36 م" src="https://github.com/user-attachments/assets/6f7fe752-b53c-47d7-850c-eba94b9ce5f8" />
</p>

This is an autonomous agricultural scout robot designed to navigate farmlands, perform planting and watering tasks, and monitor environmental conditions. It integrates environmental sensors, a high-resolution camera, front-facing LED lights, and can be fully controlled via a mobile application through Bluetooth.

---

## 🚀 Features

- 🌾 **Autonomous Navigation**: Obstacle avoidance with ultrasonic distance sensor.  
- 💧 **Automated Planting & Irrigation**: Mini servo motor for seed planting and water pump for precise watering.  
- 🌡️ **Environmental Monitoring**:  
  - **Temperature**  
  - **Humidity**  
  - **Sunlight Intensity** (LDR sensor)  
  - **Wind Speed** (wind motor)  
  - **Rain Detection**  
- 🌙 **Night Operation**: LED strip and front lights for low-light work.  
- 🎥 **Live Video Streaming**: Mi Camera 2K for real-time field monitoring.  
- 📱 **Remote Control**: HC-06 Bluetooth module connects to a smartphone app for manual override and telemetry.  

---

## 🧰 Components Used

| Component                        | Description                         |
|----------------------------------|-------------------------------------|
| Arduino UNO                      | Main microcontroller                |
| L298N Motor Driver               | Controls wheel motors               |
| 14.8V Lithium-Ion Battery        | Power source                        |
| Breadboard                       | Circuit prototyping                 |
| HC-06 Bluetooth Module           | Wireless communication              |
| Relay Module                     | Controls the water pump             |
| Water Pump                       | Irrigation                          |
| Mini Servo Motor                 | Seed planting mechanism             |
| Ultrasonic Distance Sensor       | Obstacle detection                  |
| Wind Motor                       | Measures wind speed                 |
| LDR Light Sensor Module          | Sunlight intensity measurement      |
| 5V DC Motors                     | Drive wheels and auxiliary functions|
| 5KΩ Potentiometer                | Manual sensor calibration           |
| LED Strip Light                  | Night illumination                  |
| Mi Camera 2K                     | High-definition video streaming     |

---

## 🛠️ How It Works

1. **Navigation & Sensing**: Robot drives autonomously using motor drivers and avoids obstacles via ultrasonic sensor.  
2. **Planting & Watering**: At designated locations, servo lowers seeds into soil and water pump irrigates them.  
3. **Data Collection**: Sensors record temperature, humidity, light intensity, wind speed, and rain, sending data to the mobile app.  
4. **Remote Operation**: Users can override autonomous behavior, view live video, and control functions from the app.  

---

## 📱 Mobile App

- Connect to `HC-06` Bluetooth module (default PIN: `1234`).  
- Real-time controls for movement, planting, watering, and LED lights.  
- Live streaming of camera feed and sensor data dashboard.  

 
