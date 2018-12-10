#include <DFW.h> 
#include <Servo.h>

int ledpindebug = 13
DFW dfw(ledpindebug)
Servo rightmotor;
Servo leftmotor;
Servo liftMotor;
Servo intakeMotor;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600)
dfw.begin();
dfw.update();
while (dfw.start() == 0) {
  Serial.printlm("init");
  dfw.update();
  delay(20);
}
}

void loop() {
  // put your main code here, to run repeatedly:
 dfw.update();
 leftmotor.write(dfw.joysticklv());
 rightmotor.write(180 - dfw.joystickrv());
 if (dfw.l2() == 0) {
 intakeMotor.write(180) //need to determine direction of motor
 }
 if (dfw.l1() == 0) {
  intakeMotor.write(0)
 }
 
 
}
if 
