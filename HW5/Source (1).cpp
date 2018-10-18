#include <iostream>
#include "Robot.h"
using namespace std;

int main() {
	Robot myBot();
	cout << "X: " << myBot.getXpos() << endl;
	cout << "Y: " << myBot.getYpos() << endl;
	myBot.setXpos(3);
	myBot.setYpos(7);
	myBot.MoveDiagonal(5);
	cout << "X: " << myBot.getXpos() << endl;
	cout << "Y: " << myBot.getYpos() << endl;
	
	Robot bot2();
	bot2.setXpos(15);
	bot2.setYpos(34);
	cout<< "Conflict? " << myBot.CheckConflict(bot2) << endl;
	
	return 0;
}
