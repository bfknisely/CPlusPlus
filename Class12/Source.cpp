#include <iostream>
#include "Robot.h"
#include "TurtleBot.h"
using namespace std;

int main() {
	Robot aBot(1, 2);
	TurtleBot aTBot(1, 2);
	
	int iReturn = -1;
	iReturn = aBot.getX();	
	iReturn = aTBot.getX();
	
	return 0;
}
