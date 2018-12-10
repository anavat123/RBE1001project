#include <Servo.h>
#include <Encoder.h> 
#include <LiquidCrystal.h>

LiquidCrystal lcd(40, 41, 42, 43, 44, 45);

static enum stateChoices {
  DRIVING_FORWARD, TURNING,DRIVING_FORWARD_TO_DORM, LIFT, STOPPED
} state;

const int limitSwitchPort =  ;



Servo rightMotor;
Servo leftMotor;
Servo armMotor;
Servo intakeMotor;

Encoder encoder();


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
leftMotor.attach (,1000,2000)
rightMotor.attach(,1000,2000)
armMotor.attach(,1000,2000)
intakeMotor.attach(,1000,2000)
state = DRIVING_FORWARD;
pinMode(limitSwitchPort,INPUT);
pinMode(A3,INPUT); //right line sensor
pinMode(A4,INPUT); //left line sensor
pindMode(A5,INPUT); //middle line sensor
lcd.begin(16,2);
lcd.print("Ready!");
delay(1000)
lcd.clear();
}

void loop() {
 
}
void DoDriving() {
  switch(state) {
    case DRIVING_FORWARD:
      lcd.
     if((analogRead(A3)>t) && (analogRead(A4)>t) && (analogRead(A5)<t))  //both sensor sees the carpet, and middle sensor sees line so drive forward
       leftMotor.write();
       rightMotor.write(); //go straight, add values depending on test
     if((analogRead(A3)<t) && (analogread(A4)>t)) && (analogRead(A5)>t)) // right line sensor sees the line so turn left, right motor> left motor
       leftMotor.write();
       rightMotor.write();
     if((analogRead(A3)>t) && (analogread(A4)<t)) && (analogRead(A5)>t)) // left line sensor sees the line so turn right, right motor>left motor
       leftMotor.write();
       rightMotor.write();
     if((analogRead(A3)<t) && (analogread(A4)>t)) && (analogRead(A5)<t))       // left and middle sensor sees white line, switch state to turning
       state = TURNING;
    case TURNING:
      lcd.setCursor(0,0);
      lcd.clear();
      lcd.print("TURNING");
      delay(
      leftMotor.write()
      rightMotor.write()
      delay()
       
      // raise lift and drive at same time
      
}

