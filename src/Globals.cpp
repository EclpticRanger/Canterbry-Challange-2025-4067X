#include "main.h"
#include "Globals.hpp"

int DriveLFPort = 1;
int DriveLBPort = 10;
int DriveRFPort = 2;
int DriveRBPort = 9;

pros::Motor DriveLF(DriveLFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveLB(DriveLBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRF(DriveRFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRB(DriveRBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);


pros::Controller Controller(pros::E_CONTROLLER_MASTER);