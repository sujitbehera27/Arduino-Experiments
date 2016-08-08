#include <AFMotor.h> 
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
void setup() {
  motor1.setSpeed(255);  // Set motor 1 to maximum speed
  motor2.setSpeed(255);

}

void loop() {
 motor1.run(FORWARD);
 motor2.run(FORWARD);
 
delay(3000);  // run forward for 1 second

motor1.run(BACKWARD);
motor2.run(BACKWARD);

delay(3000); 
motor1.run(RELEASE);
motor2.run(RELEASE);
delay(3000);  // 'coast' for 1/10 second
}
