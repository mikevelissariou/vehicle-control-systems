# Vehicle Control System – Change Management

This repository contains two versions of control code developed for a vehicle tracking system. The purpose of the repository is to demonstrate the use of change management and version control through GitHub by tracking the progression from a basic control system to an improved implementation.

---

## Repository Contents

- `implemented PID controller 1` – initial version using basic sensor-based motor control  
- `final code1` – improved version with refined control logic and better system behaviour  
- `README.md` – documentation of development process and version history  

---

## Project Summary

The project focuses on developing a vehicle control system that follows a track using sensor inputs and motor control. The system reads values from sensors and adjusts motor speeds to maintain alignment.

Development was carried out iteratively, starting with a simple control approach and progressing to a more refined and stable solution. Each version improved the system’s performance, accuracy, and reliability.

---

## Version History

### v1.0.0 – Basic Control System
- Implemented direct sensor-based motor control  
- Used simple difference between sensor values  
- Limited stability and responsiveness  

### v2.0.0 – Improved Control Logic
- Refined control behaviour for smoother steering  
- Improved handling of sensor input variations  
- Increased overall tracking accuracy and stability  

---

## Change Management

Change management was implemented using GitHub through commits, branching, and pull requests.

The workflow followed was:
- Initial version (`implemented PID controller 1`) created and committed  
- A new branch was created to improve the control logic  
- Changes were committed with clear messages (e.g. *"Add initial control logic implementation"*)  
- A pull request was used to merge the improved version (`final code1`) into the main branch  

This approach ensures that all changes are tracked, previous versions remain accessible, and the development process is clearly documented.

---

## Example of Change

A key improvement was the transition from a basic sensor-based control system to a more refined control implementation.

The initial version directly adjusted motor speeds based on sensor differences, which resulted in unstable movement and limited accuracy. In the updated version, the control logic was improved through a separate branch and merged via a pull request, resulting in smoother steering and better tracking performance.

---

## Conclusion

This repository demonstrates how version control and change management can be applied to an engineering project. By structuring development through commits and pull requests, the evolution of the system is clearly documented.

This approach improves traceability, allows comparison between versions, and provides clear evidence of iterative design and system improvement.****
