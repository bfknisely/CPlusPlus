// Brian Knisely
// AERSP 424 HW5
// File: Source.cpp

#include <iostream> // cout
#include <stdlib.h>  // srand, rand
#include <time.h>  // time
#include "Robot.h"
using namespace std;

int main() {
	Robot myBot(111);
	cout << "X: " << myBot.getXpos() << endl;
	cout << "Y: " << myBot.getYpos() << endl;
	cout << "SN: " << myBot.getSerialNumber() << endl;
	myBot.setXpos(3);
	myBot.setYpos(7);
	myBot.MoveDiagonal(5);
	cout << "X: " << myBot.getXpos() << endl;
	cout << "Y: " << myBot.getYpos() << endl;
	cout << "SN: " << myBot.getSerialNumber() << endl;
	
	Robot bot2(2222);
	bot2.setXpos(15);
	bot2.setYpos(34);
	cout<< "Conflict? " << myBot.CheckConflict(bot2) << endl;
	
	// Create an object with a random serial number and print result
	srand(time(0));
	int randomInteger = rand();
	Robot randoBot(randomInteger);
	cout << "randoBot SN: " << randoBot.getSerialNumber() << endl;
		
	// Create a dynamic object of type Robot with PN=15
	Robot* myRobotPtr = new Robot(9000);
	myRobotPtr->setProductNumber(15);
	
	return 0;
}


///////////////////////////////////////////////////////////////////////
/* File: Robot.h
#ifndef ROBOT_H
#define ROBOT_H
class Robot {
	public:  // member functions
		Robot(const int);
		int getXpos() const;
		int getYpos() const;
		void setXpos(int);
		void setYpos(int);
		void MoveJump();
		void MoveDiagonal(int);
		bool CheckConflict(Robot) const;
		const int getSerialNumber() const;
		int getProductNumber() const;
		void setProductNumber(int);
		void setPtrRobot(Robot*);
		~Robot();
		
	private:  // data members
		Robot* ptrRobot;
		int iXpos;
		int iYpos;
		const int iSerialNumber;
		int iProductNumber;
};
#endif



///////////////////////////////////////////////////////////////////////
// File: Robot.cpp 
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


/////////////////////////////////////////////////////////////////////*/
