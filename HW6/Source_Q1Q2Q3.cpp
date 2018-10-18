#include <iostream>
#include <string>
#include "Robot.h"
using namespace std;

int main() {
	
	const string myStr = "Blee";
	
	Robot myBot(myStr);	
	cout << "Name: " << myBot.getRobotName() << endl;
	
	const string myStr2 = "Bloo!";
	Robot* myPtrBot = new Robot(myStr2);
	cout << "Name: " << myPtrBot->getRobotName() << endl;
	cout << "myPtrBot Number: " << myPtrBot->getRobotNumber() << endl;
	
	Robot myBot2(myStr2);
	
	if(myBot == myBot2) {
		cout << "myBot == myBot2" << endl;
	} else {
		cout << "myBot != myBot2" << endl;
	}
	
	if(myBot <= myBot2) {
		cout << "myBot <= myBot2" << endl;
	} else {
		cout << "myBot !<= myBot2" << endl;
	}
	
	string emptyString = "";
	Robot myEmptyBot(emptyString);
	cout << "EmptyBot empty? " << !myEmptyBot << endl;
	cout << "myBot empty? " << !myBot << endl;
	
	Robot comBot = myBot + myBot2;
	cout << "comBot name = " << comBot.getRobotName() << endl;
	
	// Problem 3: Secret names
	const string myStr = "Bob";
	Robot myBot(myStr);	
	myBot.setSecretName(4321)
	int *sn = myBot.getSecretName();
	cout << "SecretName: " << sn << endl;
	// No, a memory leak did not result
	
	Robot myBot2(myStr);
	myBot2.setSecretName(7777);
	Robot myBot3 = myBot2;
	cout << "SecretName2: " << myBot2.getRobotName() << endl;
	cout << "SecretName3: " << myBot3.getRobotName() << endl;
	// Yes, a memory leak resulted
	
	
	return 0;
}
