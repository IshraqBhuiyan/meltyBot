#include "Arduino.h"
#include "accel.h"

double parseRawAccelerometer(){
  digitalWrite(SELFTEST, LOW);
  double accelVal=analogRead(PIN);
  return accelVal;
}

double filter(double accel){
  return accel/2;
}

double getVal(){
  return filter(parseRawAccelerometer());
}
