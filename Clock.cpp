// This file defines all of the functions and variables which were
// initialized in the header file.

#include "Clock.h"

Clock::Clock() {
	iHours = 3;
	iMinutes = 14;
}

int Clock::getHours() {
	return iHours;
}

int Clock::getMinutes() {
	return iMinutes;
}

void Clock::setHours(int x) {
	iHours = x;
}

void Clock::setMinutes(int y) {
	iMinutes = y;
}

