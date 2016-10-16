#ifndef ACCEL
#define ACCEL

#define SELFTEST 12
#define PIN 13

double parseRawAccelerometer();
double filter(double accel);
double getVal();

#endif
