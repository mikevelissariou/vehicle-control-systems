#include <PID_v1.h>

#define LSensePin  A0
#define RSensePin  A1
#define LMotorPin  9
#define RMotorPin  10

const int BaseSpeed = 110;

double Setpoint = 0;
double Input = 0;
double Output = 0;

double Kp = 5;
double Ki = 0;
double Kd = 1;

PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void setup() {
  pinMode(LSensePin, INPUT);
  pinMode(RSensePin, INPUT);
  pinMode(LMotorPin, OUTPUT);
  pinMode(RMotorPin, OUTPUT);

  myPID.SetMode(AUTOMATIC);
  myPID.SetOutputLimits(-70, 70);
  myPID.SetSampleTime(10);
}

void loop() {
  int leftSense = analogRead(LSensePin);
  int rightSense = analogRead(RSensePin);

  Input = leftSense - rightSense;

  myPID.Compute();

  int LSpeed = constrain((int)(BaseSpeed + Output), 0, 255);
  int RSpeed = constrain((int)(BaseSpeed - Output), 0, 255);

  analogWrite(LMotorPin, LSpeed);
  analogWrite(RMotorPin, RSpeed);
}
