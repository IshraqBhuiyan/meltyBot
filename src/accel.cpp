#include "Arduino.h"
#include "accel.h"

float dt = 0.1f; //time between each angular velocity reading

float parseRawAccelerometer(){
  digitalWrite(SELFTEST, LOW);
  double accelVal=analogRead(PIN);
  return accelVal;
}

float filter(double accel){
  return accel;
}
//Raw accelerometer
float getVal(){
  return filter(parseRawAccelerometer());
}

//Current Angular Velocity
float getAngVel(float angVel[], float angAccel){
  float vel = 0.0f;
  return vel;
}

// angVel is the angular velocity of the most recent measurement
// angVelPrev is the angular velocity of the next most recent measurement
// angle is the relative angle to the reference heading of the next most recent measurement
// the float "dt" is the time in between each measurement,(hence the dt between angVel and angVelPrev), it is currently an arbitrary value
float getHeading(float angVel, float angVelPrev, float angle){

  double headingAngle=(angle + angVel*dt+((((angVel-angVelPrev)/dt)*(dt^2))/2));
  if(headingAngle>=2*pi){
    headingAngle=0;
  }
  
   return headingangle;
}
