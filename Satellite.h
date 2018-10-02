#ifndef SATELLITE_H
#define SATELLITE_H

#include "SolarPanel.h"

class Satellite {
	public:
		Satellite();

		void setMass(float);
		void setVelocity(float);
		void setAltitude(float);
		void setNumSensors(int);
		void setNumSolarPanels(int);
		
		float getMass();
		
		SolarPanel aSolarPanel;
		
	private:
		float mass;
		float velocity;
		float altitude;
		int numSensors;
		int numSolarPanels;
		
		
};

#endif
