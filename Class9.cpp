/* 

Using pointers to objects
When using a pointer to an object, the dot (.) operator is
replaced with the arrow operator (->)

#include <iostream>
#include “Robot.h”
using namespace std;

int main() {

	Robot* ptrToRobot = new Robot();
	ptrToRobot->setXPosition(9);
	cout << “Legs: “<< ptrToRobot->getXPosition();
	delete ptrToRobot;
	
	return 0;
}


#include <iostream>
#include "Robot.h"
using namespace std;

int main() {Robot flyBot(UAV); // non-const object
	const Robot surfBot(USV);  // const object
	
								// MEMBER		OBJECT
	flyBot.setBatteryPct(50);   // non-const 	non-const
	surfBot.setBatteryPct(10);  // non-const  	const
	flyBot.getRobotType();		// const		non-const
	surfBot.getBatteryPct();    // const		const
	return 0;
}


Include CONST declaration for "getter" functions.
Nothing should be changed by this function.

int Robot::getBatteryPct() const {
	return iBatteryPct;
}
*/

#include <iostream>
using namespace std;
void staticVar();
void noStaticVar();

int main() {
	for(int i = 0; i < 5; i++) {
		staticVar();
		noStaticVar();
	}
	return 0;
}

void staticVar() {
	static int iCount = 0;
	iCount++;
	cout << "Static: " << iCount << endl;
}

void noStaticVar() {
	int iCount = 0;
	iCount++;
	cout << "No Static: " << iCount << endl;
}
