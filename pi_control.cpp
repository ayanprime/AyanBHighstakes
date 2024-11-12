#include "main.h"

void goForwardPI(float Dis) {
    //distance right pod has gone
    odomR = RightP.position(turns) * 12.5663706;
    //distance left pod has gone
    odomL = LeftP.position(turns) * 12.5663706;
    
    RKp = (odomR/Dis) * 100;
    LKp = (odomL/Dis) * 100;
    etR = Dis - odomR;
    etL = Dis - odomL;

    if (elapsedTime >= 1000){

        dt = elapsedTime;
        InewR = IoldR + (etR * dt);
        IoldR = InewR;
        InewL = IoldL + (etL * dt);
        IoldL = InewL;

    }

    PR = RKp * etR;
    PL = LKp * etL;
    IR = Ki * InewR;
    IL = Ki * InewL;

    Right.setVelocity(PR + IR, percent);
    Left.setVelocity(PL + IL, percent);
    Brain.Screen.clearScreen();
    Brain.Screen.print(Right.velocity(percent));
    Brain.Screen.newLine();
    Brain.Screen.print(Left.velocity(percent));

}