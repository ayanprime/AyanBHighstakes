#include "main.h"

// ===================== Devices ===================== //

//main devices
brain Brain;
controller controller1 = controller(primary);

//motors
motor rmA = motor(PORT18, ratio18_1, true);
motor rmB = motor(PORT19, ratio18_1, true);
motor_group Right = motor_group(rmA, rmB);

motor lmA = motor(PORT12, ratio18_1, false);
motor lmB = motor(PORT13, ratio18_1, false);
motor_group Left = motor_group(lmA, lmB);

//pods
rotation RightP = rotation(PORT8, false);

rotation LeftP = rotation(PORT6, true);