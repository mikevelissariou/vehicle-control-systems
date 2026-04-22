# Vehicle Control System – Change Management

This repository contains the Arduino control code developed for a vehicle tracking system. The purpose of this repository is to demonstrate the application of change management and version control using GitHub.

## Repository Contents

- `vehicle_code_stage1.ino` – original version of code with basic sensor processing 
- `vehicle_code_stage2.ino` – addition of proportional steering control 
- `vehicle_code_stage3.ino` – Replaced proportional control with PID controller
- `vehicle_code_v4.ino` – Added sensor smoothing calibration and lost-track handling
- `README.md` – description and version history

## Project Summary 

The project involves developing a vehicle that can follow a track using sensor inputs and motor control. The system reads values from sensors and adjusts motor speeds to maintain alignment with the track.

The code was developed in stages, with each version improving the performance and reliability of the system.

## Version History

### v1.0.0
- Initial version using basic left/right sensor comparison

### v1.1.0
- Added proportional control to improve steering smoothness

### v1.2.0
- Introduced PID control for more accurate correction

### v2.0.0
- Added sensor smoothing
- Implemented calibration offsets
- Added lost-track detection
- Improved overall performance

## Change Management

Change management was implemented using GitHub. The original version of the code was uploaded to the repository, and further development was carried out using separate versions. Each change was committed with a clear message describing what was modified.

A structured process was followed:
- Initial code uploaded
- Improvements developed in stages
- Changes committed and documented
- Final version produced with enhanced functionality

This approach ensures that all changes are tracked, previous versions can be accessed, and the development process is clearly documented.

## Example of Change

One significant change was the transition from basic sensor comparison to PID control. This improved the system by allowing continuous adjustment of motor speeds, resulting in smoother and more accurate tracking.

## Conclusion

This repository demonstrates how version control and change management can be applied to an engineering project. By organising development into stages and documenting changes, the project becomes easier to manage, understand, and improve.
