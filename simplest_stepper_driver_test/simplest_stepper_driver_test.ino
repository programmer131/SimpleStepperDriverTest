/ Defines pins numbers
const int stepPin = 3;
const int dirPin = 4;  
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  digitalWrite(dirPin,HIGH); //Enables the motor to move in a particular direction
}
void loop() {
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(800);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(800);
}
