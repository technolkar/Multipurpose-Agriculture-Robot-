Overview
This project is a fully functional IoT-based multipurpose agricultural robot designed to perform four essential farming operations  grass cutting, seed sowing, pesticide spraying, and plant watering  using a single compact platform.
The robot is powered by a rechargeable battery with solar charging and can be controlled remotely through an IoT dashboard using the ESP8266 NodeMCU. The main idea behind the project is to reduce human effort in agricultural tasks while promoting sustainable and smart farming methods.

Project Description
1️⃣ Concept and Objective
The goal of this project was to design a multi-function agricultural vehicle that could automate basic farm operations using simple, low-cost electronics and mechanical mechanisms. The robot is capable of:
Moving across the field on four independent DC motors.
Cutting grass using a high-speed motor.
Sowing seeds at regular intervals using a rotary disc mechanism.
Spraying water or pesticide from an onboard tank using a DC pump.
Sending soil moisture, humidity, and temperature readings to a cloud dashboard in real-time.
All these features are controlled wirelessly via the ESP8266 microcontroller using relays, making it a powerful yet simple automation platform for agricultural use.

2️⃣ Design and Body Construction
The entire structure was fabricated on an acrylic base sheet, which acts as the main chassis. Four DC geared motors are mounted directly on the base one for each wheel. This gives the robot a stable and balanced drive system capable of moving in all directions (forward, reverse, and turning).
The robot’s body includes:
A seed hopper and rotary disc mechanism at the center.
A liquid tank and pump system at the rear.
A grass cutting motor with a blade mounted at the front.
A solar panel mounted on the top for charging the battery.
All the electrical components are mounted on one side of the chassis for easy wiring and access, as visible in the reference images.

3️⃣ Drive System and Movement
The robot uses four individual 12V DC geared motors, each connected to a wheel. All four motors are connected through relay switches, which are controlled by the ESP8266. By activating specific relays, the robot can move:
Forward (all wheels in same direction) Reverse (all wheels reversed) Left turn (right-side motors ON, left-side OFF) Right turn (left-side motors ON, right-side OFF) Stop (all relays OFF). This simple relay-based motor control eliminates the need for a motor driver, while still providing reliable directional control.

4️⃣ Seed Sowing Mechanism
At the center of the robot is the seed sowing unit, built using transparent acrylic sheets. It has a hopper for storing seeds and a rotating disc driven by a DC motor. The disc has small cavities that carry seeds from the hopper and drop them uniformly through a chute into the soil as it rotates. The sowing motor is connected to the relay board and can be turned ON or OFF wirelessly through the IoT dashboard. This ensures controlled and even seed distribution during movement.

5️⃣ Grass Cutting System
The front section of the robot is fitted with a high-RPM DC motor attached to a cutter blade. The motor is powered via a relay output from the ESP8266. When activated, it spins at high speed and cuts the grass efficiently as the robot moves forward. A protective casing is provided to ensure safety and to prevent debris from hitting the electronics.

6️⃣ Pesticide Spraying and Watering System
The rear section of the robot houses a transparent acrylic tank filled with either water or pesticide solution. A 12V mini DC pump draws liquid from the tank and pushes it through PVC pipes and elbows to a spray nozzle mounted at the top. The pump is also connected to the relay module and can be controlled remotely. When activated, it sprays the liquid evenly over the crops. The use of flexible PVC tubing ensures smooth flow and easy maintenance.

7️⃣ Electronic Control and IoT Integration
At the heart of the robot lies the ESP8266 NodeMCU microcontroller. It is responsible for controlling all relays, reading sensors, and communicating with the IoT platform. An 8-channel relay module is used to operate:
The four drive motors
The grass-cutting motor
The seed-sowing motor
The water pump
All components are powered by a 12V Li-ion battery pack, and the logic circuit (ESP8266 and relays) is supplied through a buck converter to provide 5V power.
For wireless operation, the ESP8266 connects to Wi-Fi and communicates with an IoT dashboard (such as Blynk). From the dashboard, the user can: Move the robot in different directions. Start or stop the cutter, pump, or seed motor. Monitor real-time sensor readings like soil moisture, temperature, and humidity. The system can also log data over time to help analyze field conditions.

8️⃣ Solar Power and Battery Management
To make the robot self-sustaining, a solar panel is mounted on the top of the chassis. The panel charges the Li-ion battery pack via a charge controller, allowing the system to recharge while operating in sunlight. This feature eliminates dependency on external charging and enables long hours of operation in open fields.

9️⃣ Sensors and Data Monitoring
The robot integrates:
A soil moisture sensor to detect soil wetness and automatically trigger watering if required.
A DHT11/DHT22 sensor to measure ambient temperature and humidity.
The sensor values are transmitted in real-time to the IoT dashboard, helping farmers monitor field conditions remotely.

🔌 Power Flow Explanation
The power from the solar panel charges the battery through a charge controller.
The battery output is distributed in two ways:
12V directly to high-load devices like motors and pumps through the relays.
5V regulated power supplied to the ESP8266 and sensors via a buck converter.
The ESP8266 acts as the central brain, controlling the relays to turn ON/OFF each motor based on IoT commands or automatic logic from the sensors.

🔄 Working Summary
When powered ON, the ESP8266 connects to the Wi-Fi network and initializes all modules. The user operates the robot through an IoT dashboard. Movement is controlled by activating relays that power the respective drive motors. The cutter motor, pump, and seed sowing motor are switched ON as needed. Soil and air data are continuously read and updated on the dashboard. The solar panel maintains battery charge during daylight use.

🧠 Features and Advantages
Performs multiple farming tasks with one robot (cutting, sowing, spraying, watering). Fully wireless control through an IoT dashboard. Real-time environmental monitoring with sensor data. Solar-assisted charging ensures long, uninterrupted operation. Low-cost, modular, and easy to maintain design. Can be customized for larger scale or specific crop requirements.
