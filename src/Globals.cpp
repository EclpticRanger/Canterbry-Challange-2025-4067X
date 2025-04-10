#include "main.h"
#include "Globals.hpp"

int DriveLFPort = 2; // Left Front Drive Motor Port
int DriveLBPort = 9; // Left Back Drive Motor Port
int DriveRFPort = -1; // Right Front Drive Motor Port
int DriveRBPort = -10; // Right Back Drive Motor Port
int LeftWingPort = 3; // Left Wing Motor Port
int RightWingPort = 8; // Right Wing Motor Port
int ArmSpeed = 127; // Speed of the Arm Motors

pros::Motor DriveLF(DriveLFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveLB(DriveLBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRF(DriveRFPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor DriveRB(DriveRBPort, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor LeftWing(LeftWingPort, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);
pros::Motor RightWing(RightWingPort, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);

pros::Controller Controller(pros::E_CONTROLLER_MASTER);