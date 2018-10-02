#include "Satellite.h"
#include <iostream>
using namespace std;

int main() {
	Satellite mySat;
	mySat.getMass();
	mySat.setMass(3.14);
	mySat.getMass();
	
	SolarPanel aLocalSolarPanel;
	
	Satellite aSatellite;
	cout << aSatellite.aSolarPanel.getNumberOfCells() << endl;
	
	return 0;
}
