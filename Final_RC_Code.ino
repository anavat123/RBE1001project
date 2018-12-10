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
leftmotor.attach(,1000,2000)
rightmotor.attach(,1000,2000)
intakeMotor.attach(,1000,2000)
liftMotor.attach(,1000,2000)
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
 intakeMotor.write(180); //need to determine direction of motor
 }
 if (dfw.l1() == 0) {
  intakeMotor.write(0);
 }
 if (dfw.one() == 0) {
  liftMotor.write(0);
    dfw.update();
 }
  if (dfw.three() == 0) {
  liftMotor.write(180);
    dfw.update();
 }
 
 
 
}
 
