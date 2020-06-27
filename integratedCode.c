#include <AFMotor.h>
#include <Servo.h>

int pressurePin = A0;
int force;
Servo  my_servo; //servo motor
//int LEDpin = 12; led pin for testing whether the foce sensor works

void setup() {
  Serial.begin(9600);
  //pinMode(LEDpin, OUTPUT);
  my_servo.attach(10); //the top left servo port which is servo 1
}

void loop() {
  force = analogRead(pressurePin);
  Serial.println(force);
  if(force > 500)
  {
     my_servo.write(0);
     delay(3000);

    my_servo.write(230); //230 degrees would pull the shoe lace properly based on experiments
    delay(3000);

    my_servo.write(0);
    delay(3000); //3 seconds to return to initial position
 }
 
}