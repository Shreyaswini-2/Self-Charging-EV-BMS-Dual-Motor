# Self-Charging Electric Vehicle (EV) System

## Project Description
This project presents an innovative self-charging electric vehicle (EV) system designed to enhance efficiency, range, and adaptability. The system operates with two motors: a primary motor responsible for propulsion and a secondary motor that acts as a generator to charge the primary motor. Key features include automated control for seamless power transitions, torque control modes, and real-time monitoring through an LCD display.  

The system incorporates regenerative braking to recover kinetic energy, maximizing energy utilization and reducing reliance on external charging. The hardware design, coupled with intelligent software control, ensures enhanced performance and adaptability to varying driving conditions.

---

## Objectives
1. **Automated Power Transition:**  
   Activate the secondary motor as a generator and engage the reverse polarity relay of the primary motor when the battery level falls below 50%, ensuring continuous charging for optimal battery levels.
   
2. **Torque Control Modes:**  
   - High torque for ascending inclines.  
   - Low torque for descending declines, utilizing regenerative braking for energy recovery.  

3. **Monitoring and Safety:**  
   - Monitor battery status and control relay switching using sensors and microcontrollers.  
   - Safeguard both motors against faults during operation.  

4. **Energy Optimization:**  
   - Balance energy utilization and propulsion efficiency between motors.  
   - Minimize reliance on external charging sources.  

5. **User Feedback:**  
   - Real-time monitoring of vehicle status and performance via an LCD display.

---

## Hardware Components
- **Microcontroller:** Arduino UNO  
- **Battery:** AT12-1-3  
- **Motors:** DC motors (Primary and Secondary)  
- **Display:** LCD Display  
- **Power Regulation:** LM2596 Buck Converter  
- **Relay:** Relay for motor switching  
- **Rectifier:** IN4007  
- **Transistor:** BC547  
- **Voltage Sensor**  
- **Temperature Sensor**

---

## Features
- **Extended Range:** Seamless transition between motors increases travel distance on a single charge.  
- **Torque Modes:** Selectable torque modes to adapt to varying driving conditions.  
- **Incline Adaptability:** High torque mode for slopes with automatic adjustments to optimize performance.  
- **Regenerative Braking:** Energy recovery during descent extends vehicle range.  
- **Real-Time Monitoring:** LCD display provides feedback on battery levels, torque mode, and performance.  

---

## Future Scope
1. **Enhanced Performance:** Utilize advanced battery and motor technologies for extended range and smoother transitions.  
2. **Battery Management Systems (BMS):** Integrate sophisticated BMS for improved efficiency and safety.  
3. **AI Integration:** Implement AI-driven controls for real-time optimizations and user experience enhancements.  
4. **Renewable Energy:** Collaborate on renewable energy innovations for sustainable power solutions.  
5. **Versatile Applications:** Expand dual-motor technology applications to various industries.  
6. **Autonomous Driving Synergy:** Real-time adjustments to optimize autonomous driving experiences.  

---

## Circuit Diagram
![Circuit Diagram](link-to-circuit-diagram.png)  

---

## Hardware Photo
![Hardware Photo](link-to-hardware-photo.png)  

---

## Code
[View the Code](link-to-code-folder)  

---

## How It Works
1. The primary motor powers the EV, while the secondary motor charges the primary motor.  
2. When the battery charge falls below 50%, the secondary motor becomes the main power source.  
3. Torque modes can be switched via user input to adapt to different terrains or driving needs.  
4. Regenerative braking captures kinetic energy during deceleration, storing it for future use.  
5. An LCD display provides critical information, including torque mode, battery charge, and performance metrics.
