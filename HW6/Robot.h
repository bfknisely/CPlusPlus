#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
using namespace std;

class Robot {
	public: //member functions
		Robot(const string);
		void setRobotNumber(int);
		int getRobotNumber() const;
		const string getRobotName() const;
		bool operator==(Robot&) const;
		bool operator<=(Robot&) const;
		const Robot operator+(Robot&);
		bool operator!() const;
		const Robot operator=(Robot&);
		void setSecretName(int);
		int* getSecretName();
		~Robot();
		
	private: //data members
		int iRobotNumber;
		int* iSecretName;
		Robot* ptrRobot;
		const string strRobotName;

};
#endif
