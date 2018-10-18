#include <iostream>
#include <string>
#include "Machine.h"

using namespace std;

int main() {
	/*
	Machine device;
	cout << "Weight: " << device.getWeight() << endl;
	cout << "Name: " << device.getName() << endl;
	device.setWeight(20);
	device.setName("Bob");
	cout << "Weight: " << device.getWeight() << endl;
	cout << "Name: " << device.getName() << endl;
	
	Machine* mPointer = new Machine;
	cout << "Weight: " << mPointer->getWeight() << endl;
	mPointer->setWeight(30);
	mPointer->setName("Ghost");
	cout << "Weight: " << mPointer->getWeight() << endl;
	cout << "Name: " << mPointer->getName() << endl;
	delete mPointer;
	mPointer=0;
	*/
	int a = 3;
	int* b = &a;
	cout << "&a " << &a << endl;
	cout << "b  " << b << endl;
}
