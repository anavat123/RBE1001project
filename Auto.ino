#include <Servo.h>
#include <Encoder.h> 
static enum stateChoices {
  DRIVING_FORWARD, TURNING, LIFT, STOPPED
} state;

const int limitSwitchPort =  ;
const int 


Servo rightMotor;
Servo leftMotor;
Servo armMotor;
Servo intakeMotor;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
leftMotor.attach (,1000,2000)
rightMotor.attach(,1000,2000)
armMotor.attach(,1000,2000)
intakeMotor(,1000,2000)
state = DRIVING_FORWARD;

}

void loop() {
  // put your main code here, to run repeatedly:

}
