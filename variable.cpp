#include "main.h"

vex::timer myTimer;
double dt;
double odomR;
double odomL;
double etR;
double etL;
double RKp;
double LKp;
double dis;
double InewR;
double IoldR = 0;
double InewL;
double IoldL = 0;
int elapsedTime = myTimer.time(vex::timeUnits::msec);
double dt;
float Ki = 1;
double PR;
double PL;
double IR;
double IL;
