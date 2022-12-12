/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       romanpisani                                               */
/*    Created:      Thu Nov 10 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    4, 11, 6, 20    
// Motor3               motor         3               
// Motor10              motor         10              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----


#include "vex.h"

using namespace vex;
 competition Competition;


int autonomous() {
  Drivetrain.driveFor(forward, 62.0, inches, true);
  vexSystemExitRequest();
  return 0;
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
}
