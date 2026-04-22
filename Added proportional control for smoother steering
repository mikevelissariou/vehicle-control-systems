#define LSensePin  A0
#define RSensePin  A1
#define LMotorPin  9
#define RMotorPin  10

const int BaseSpeed = 110;
const float Kp = 0.15;

void setup() {
  pinMode(LSensePin, INPUT);
  pinMode(RSensePin, INPUT);
  pinMode(LMotorPin, OUTPUT);
  pinMode(RMotorPin, OUTPUT);
}

void loop() {
  int leftSense = analogRead(LSensePin);
  int rightSense = analogRead(RSensePin);

  int error = leftSense - rightSense;
  int correction = (int)(Kp * error);

  int LSpeed = constrain(BaseSpeed + correction, 0, 255);
  int RSpeed = constrain(BaseSpeed - correction, 0, 255);

  analogWrite(LMotorPin, LSpeed);
  analogWrite(RMotorPin, RSpeed);
}
