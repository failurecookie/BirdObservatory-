//Automatic Food Drop to Sustain Food

#include <Servo.h> 

// Declare the Servo pin
int servoPin = 3;
// Create a servo object
Servo Servo1;

void setup() {
  // We need to attach the servo to the used pin number
  Servo1.attach(servoPin);
}

void loop(){
  // Make servo go to 0 degrees
  Servo1.write(0);
  delay(150);
  // Make servo go to 90 degrees
  Servo1.write(90);
  delay(20000);
}
