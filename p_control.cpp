#include "main.h"

void goForwardP(float Dis) {
    //distance right pod has gone
    odomR = RightP.position(turns) * 12.5663706;
    //distance left pod has gone
    odomL = LeftP.position(turns) * 12.5663706;
    
    RKp = (odomR/Dis) * 100;
    LKp = (odomL/Dis) * 100;
    etR = Dis - odomR;
    etL = Dis - odomL;

  
    Right.setVelocity(RKp * etR, percent);
    Left.setVelocity(LKp * etL, percent);
    Brain.Screen.clearScreen();
    Brain.Screen.print(Right.velocity(percent));
    Brain.Screen.newLine();
    Brain.Screen.print(Left.velocity(percent));

}