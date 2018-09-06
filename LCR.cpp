
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

//functions
void rollDie(unsigned int& uiRoll, unsigned int& iDollars);

int main() {
	default_random_engine engine{
		  static_cast<unsigned int> (time(0)) };
	uniform_int_distribution<unsigned int> 	randomInt(1, 6);

	unsigned int iDollars = 3;
		
	if (iDollars == 0)
		cout << "You are out of dollars!" << endl;

	cout << "Press 1 to roll the die\nPress 2 to add a dollar\nPress 3 to remove a dollar\nPress 9 end the game\n" << endl;
	int iChoice;
	while (true) {
	
		cout << "You have: $"<<iDollars <<"\n"<< endl;
		cin >> iChoice;

		if (iChoice == 9)
			break;
		else if (iChoice == 1) {
			unsigned int uiRoll = randomInt(engine);
			rollDie(uiRoll, iDollars); 
		}
		else if (iChoice == 2) {
			cout << "Adding a dollar. ";
			iDollars++;
		}
		else if (iChoice == 3) {
			cout << "Subtracting a dollar. ";
			iDollars--;
		}
		else {
			cout << "Incorrect number" << endl;
		}
	}
}

//function Roll or Change Dollar amount
void rollDie(unsigned int& uiRoll, unsigned int& iDollars) {

	if (uiRoll == 1) {
		cout << "LEFT" << endl;
		iDollars--;
	}
	else if (uiRoll == 2) {
		cout << "RIGHT" << endl;
		iDollars--;
	}
	else if (uiRoll == 3) {
		cout << "CENTER" << endl;
		iDollars--;
	}
	else {
		cout << "DOT" << endl;
	}
	return;
}