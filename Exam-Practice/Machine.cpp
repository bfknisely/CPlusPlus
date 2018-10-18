
#include <iostream>
#include <string>
#include "Machine.h"

using namespace std;

Machine::Machine() {
	iWeight=10;
	*iGoalWeight = 8;
	sName = "Sally";
	cout << "Machine constructed" << endl;
}

void Machine::setWeight(int x){
	iWeight = x;
}

int Machine::getWeight() const {
	return iWeight;
}

void Machine::setName(string s){
	sName = s;
}

string Machine::getName() const {
	return sName;
}

Machine::~Machine() {
	delete iGoalWeight;
	iGoalWeight=0;
	cout << this->getName() << " destroyed" << endl;	
}

int* Machine::getGoalWeight() const {
	return iGoalWeight;
}

void Machine::setGoalWeight(int &input) {
	iGoalWeight = &input;
}
