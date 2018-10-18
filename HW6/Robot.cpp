#include <iostream>
#include <stdlib.h>  // srand, rand
#include <time.h>  // time
#include "Robot.h"
using namespace std;

Robot::Robot(const string input) : strRobotName(input) {
	srand(time(0));
	int randomInteger = rand();
	setRobotNumber(randomInteger);
	int iSecretName_init = 1234;
	setSecretName(iSecretName_init);
}

int Robot::getRobotNumber() const {
	return iRobotNumber;
}

void Robot::setRobotNumber(int x) {
	iRobotNumber = x;
}

const string Robot::getRobotName() const {
	return strRobotName;
}

// Overloading == operator
bool Robot::operator==(Robot& bot) const {
	if(this->strRobotName == bot.strRobotName)
		return true;
	else
		return false;
}

// Overloading <= operator
bool Robot::operator<=(Robot& bot) const {
	if(this->strRobotName <= bot.strRobotName)
		return true;
	else
		return false;
}

// Overloading + operator
const Robot Robot::operator+(Robot& bot) {
	string botName = this->getRobotName() + bot.getRobotName();
	const Robot aRobot(botName);
	return aRobot;
}

// Overloading ! operator	
bool Robot::operator!() const {
	return this->getRobotName() == "";
};

// Overloading = operator, deep copy constructor
const Robot Robot::operator=(Robot& bot){
	string name = bot.getRobotName();
	Robot aRobot(name);
	return aRobot;
}

// Shallow copy constructor
const Robot Robot::operator=(Robot& bot){
	return bot*;
}

void Robot::setSecretName(int iName) {
	iSecretName = &iName;
}
		
int* Robot::getSecretName() {
	return iSecretName;
}

// Destructor
Robot::~Robot() {
	cout << "Killed Robot Number " << this->getRobotNumber() << endl;
	delete ptrRobot;
	ptrRobot = 0;
}


