#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intake ({1,10});
inline ez::Piston MatchLoader('A');
inline ez::Piston Descore('B');

inline ez::Piston RedirectT('D');
inline ez::Piston RedirectB('E');
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
