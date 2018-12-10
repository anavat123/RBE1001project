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
     if((analogRead(A3)>t) && (analogRead(A4)>t))
       leftMotor.write()
       rightMotor.write() //go straight
      
      
}

