#include <iostream>
#include "Robot.h"
using namespace std;

Robot::Robot(const int x) : iSerialNumber(x) {
	//const int iSerialNumber = serial;
	iProductNumber = 36;
}

int Robot::getXpos() const {
	return iXpos;
}

int Robot::getYpos() const {
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

bool Robot::CheckConflict(Robot bot2) const {
	if(this->getXpos() == bot2.getXpos() && this->getYpos() == bot2.getYpos())
		return true;
	else
		return false;
}

const int Robot::getSerialNumber() const {
	return iSerialNumber;
}

int Robot::getProductNumber() const {
	return iProductNumber;
}

void Robot::setProductNumber(int x){
	iProductNumber = x;
}

Robot::~Robot(){ //Destructor
	cout << "Destroying robot with PN:" << this->getProductNumber() << endl;
	delete ptrRobot;
	ptrRobot = 0;
}
