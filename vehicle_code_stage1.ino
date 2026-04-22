#define LSensePin  A0
#define RSensePin  A1
#define LMotorPin  9
#define RMotorPin  10

const int BaseSpeed = 100;

void setup() {
  pinMode(LSensePin, INPUT);
  pinMode(RSensePin, INPUT);
  pinMode(LMotorPin, OUTPUT);
  pinMode(RMotorPin, OUTPUT);
}

void loop() {
  int leftSense = analogRead(LSensePin);
  int rightSense = analogRead(RSensePin);

  if (leftSense > rightSense + 20) {
    analogWrite(LMotorPin, 80);
    analogWrite(RMotorPin, 120);
  }
  else if (rightSense > leftSense + 20) {
    analogWrite(LMotorPin, 120);
    analogWrite(RMotorPin, 80);
  }
  else {
    analogWrite(LMotorPin, BaseSpeed);
    analogWrite(RMotorPin, BaseSpeed);
  }
}
