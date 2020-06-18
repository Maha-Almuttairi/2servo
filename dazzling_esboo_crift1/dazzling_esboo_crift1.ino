#include <Servo.h>

#include <Servo.h>
int FRONT = 4;
int BACK = 5;

Servo front, back;


void setup() {
 
  front.attach(FRONT); 
  back.attach(BACK);
  front.write(100);  //Center the servo
  back.write(100);   //Center the servo
  delay(2000);      //Wait 5 sec (This gives us time to unplug the arduino
                    //  so we can affix the legs.
  
//  digitalWrite(13,HIGH);  //LED on
}


void loop() {
 
  front.write(70);        //move front leg a little
  delay(400);
  back.write(110);         //move back leg a little
  digitalWrite(13,LOW);   //LED off
  delay(400);
  front.write(110);       //move front leg a little
  delay(400);
  back.write(70);        //move back leg a little
}