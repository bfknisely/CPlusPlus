#include "Robot.h"
#include <iostream>
using namespace std;

Robot::Robot(int a, int b){
	iX = a;
	iY = b;
	cout << "Called Robot constructor" << endl;
}

int Robot::getX(){
	cout << "Robot X gon give it to ya: " << iX << endl;
	return iX;
}

void Robot::setX(int iInput){
	iX = iInput;
}
