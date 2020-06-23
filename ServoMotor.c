#include "AFMotor.h"
#include "Servo.h"

Servo  my_servo;

void setup() {

    my_servo.attach(9); // SER0
                        // .attach(10) SER1
    }

void loop() {
    my_servo.write(0);
    delay(3000);

   my_servo.write(180);
   delay(300);
  
 }