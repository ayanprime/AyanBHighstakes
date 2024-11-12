#include "variable.hpp" // Only include variable.hpp, no main.h

vex::timer myTimer;
double dt = 0.0;
double odomR = 0.0;
double odomL = 0.0;
double etR = 0.0;
double etL = 0.0;
double RKp = 0.0;
double LKp = 0.0;
double dis = 0.0;
double InewR = 0.0;
double IoldR = 0.0;
double InewL = 0.0;
double IoldL = 0.0;
int elapsedTime = myTimer.time(vex::timeUnits (msec));
float Ki = 1.0;
double PR = 0.0;
double PL = 0.0;
double IR = 0.0;
double IL = 0.0;
