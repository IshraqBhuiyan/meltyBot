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

// angVel[] is an array of the last whatever amount of values since the last h0
// h0 is the angular position of the accepted reference heading, which is just 0, ignore this for now
// the float "dt" is the time in between each measurements,(hence the dt between each v in angVel[]), it is currently an arbitrary value
float getHeading(float angVel[], float h0){
  return 0.0f;
}
