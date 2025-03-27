#include "main.h"
#include "Globals.hpp"

int DriveLFPort = 9;
int DriveLBPort = 2;
int DriveRFPort = 10;
int DriveRBPort = 1;

pros::Motor DriveLF(DriveLFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveLB(DriveLBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRF(DriveRFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRB(DriveRBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);


pros::Controller Controler(pros::E_CONTROLLER_MASTER);