#include "Satellite.h"
#include "SolarPanel.h"
#include <iostream>
using namespace std;

Satellite::Satellite() {
	mass = 1.1;
	velocity = 500;
	altitude = 10000;
	numSensors = 20;
	numSolarPanels = 8;
	aSolarPanel.getNumberOfCells();
}

void Satellite::setMass(float input) {
	mass = input;
}

float Satellite::getMass() {
	cout << "Mass: " << mass << endl;
}


