#include "Robot.h"

Robot::Robot(const int serial) {
	const int iSerialNumber = serial;
}

int Robot::getXpos(){
	return iXpos;
}

int Robot::getYpos(){
	return iYpos;
}

void Robot::setXpos(int x){
	iXpos = x;
}

void Robot::setYpos(int y){
	iYpos = y;
}

void Robot::MoveJump(){
	iXpos += 2;
	iYpos += 2;
}

void Robot::MoveDiagonal(int k){
	iXpos *= k;
	iYpos *= k;
}

bool Robot::CheckConflict(Robot bot2){
	if(this->getXpos() == bot2.getXpos() && this->getYpos() == bot2.getYpos())
		return true;
	else
		return false;
}
	
