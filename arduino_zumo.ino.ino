
#include <Wire.h>
#include <ZumoShield.h>

#define LED_PIN 13

ZumoMotors motors;

void setup()
{
  pinMode(LED_PIN, OUTPUT);

  void loop() 
 
 
  // run left motor forward

  digitalWrite(LED_PIN, HIGH);

  for (int speed = 0; speed <= 800; speed++)
  {
    motors.setLeftSpeed(speed); 
    motors.setRightSpeed(speed);

   delay(500);
  }

  for (int speed = 800; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);

    delay(500);
  }
  
// run right motor forward

  digitalWrite(LED_PIN, HIGH);

  for (int speed = 0; speed <= 400; speed++)
  {
    motors.setRightSpeed(speed);
    motors.setLeftSpeed(speed);

    delay(500);
  }

  for (int speed = 400; speed >= 0; speed--)
  
    motors.setRightSpeed(speed);
    motors.setLeftSpeed(speed);
    
// stop and pause

   motors.setSpeeds(0,0);
   delay(1000);
    
    
  // run left motor backward

  digitalWrite(LED_PIN, LOW);

  for (int speed = 0; speed >= -400; speed--)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);

    delay(500);
  }

  for (int speed = -400; speed <= 0; speed++)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);

    delay(500);
  }


  // run right motor backward

  digitalWrite(LED_PIN, LOW);

  for (int speed = 0; speed >= -400; speed--)
  {
    motors.setRightSpeed(speed);
    motors.setLeftSpeed(speed);

    delay(500);
  }

  for (int speed = -400; speed <= 0; speed++)
  {
    motors.setRightSpeed(speed);
    motors.setLeftSpeed(speed);

    delay(500);
  }
    //turn left
    motors.setSpeed(-motorSpeed,motorSpeed);
    delay(500);
  
   //stop
   motors.setSpeed (0,0);
   
   
  
}
