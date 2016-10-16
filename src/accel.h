#ifndef ACCEL
#define ACCEL

#define SELFTEST 12
#define PIN 13

float parseRawAccelerometer();
float filter(double accel);
float getVal();

#endif
