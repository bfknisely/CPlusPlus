#include "TurtleBot.h"
#include "Robot.h"
#include <iostream>
using namespace std;

TurtleBot::TurtleBot(int a, int b):Robot(a, b){
	iX = a*2;
	iY = b*2;
	cout << "Called TurtleBot constructor" << endl;
}

int TurtleBot::getX(){
	cout << "Turtle X gon give it to ya: " << iX << endl;
	return iX;
}


