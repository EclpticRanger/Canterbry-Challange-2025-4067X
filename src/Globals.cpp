#include "main.h"
#include "Globals.hpp"

int DriveLFPort = 2;
int DriveLBPort = 9;
int DriveRFPort = -1;
int DriveRBPort = -10;

pros::Motor DriveLF(DriveLFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveLB(DriveLBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRF(DriveRFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRB(DriveRBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);


pros::Controller Controller(pros::E_CONTROLLER_MASTER);