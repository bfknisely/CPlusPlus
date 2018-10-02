#include "Robot.h"
#include <iostream>
using namespace std;

void Robot::Robot(ROBOT_TYPE ty) {
	botType =ty;
}

bool Robot::operator==(const Robot& bot) {
	if(this->iSerialNumber == bot.iSerialNumber)
		return true;
	else
		return false;
}

bool Robot::operator>(const Robot& bot) {
	if(this->iSerialNumber > bot.iSerialNumber)
		return true;
	else
		return false;
}

const Robot& Robot::operator-(const Robot& bot){
	int iNewSerialNumber = this->iSerialNumber - bot.iSerialNumber;
	ROBOT_TYPE returnBotType = this->botType;
	Robot returnBot(returnBotType);
	returnBot.iSerialNumber = iNewSerialNumber;
	return returnBot;
}
