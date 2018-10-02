#ifndef TURTLEBOT_H
#define TURTLEBOT_H

#include "Robot.h"

class TurtleBot : public Robot {
	public:
		TurtleBot(int, int);
		int getX();
		
	private:
		int iX;
		int iY;
};

#endif

