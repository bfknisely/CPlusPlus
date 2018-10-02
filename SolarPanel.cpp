#include "SolarPanel.h"
#include <iostream>

SolarPanel::SolarPanel(){
	iNumberOfCells = 6;
}

int SolarPanel::getNumberOfCells() {
	return iNumberOfCells;
}
