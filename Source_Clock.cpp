// Brian Knisely
// AERSP 424
// Class 7 Quiz
// Classes - Clock example

#include <iostream>
#include "Clock.h"
using namespace std;

int main() {
	Clock timex;
	
	cout << "Hours: " << timex.getHours() << endl;
	cout << "Minutes: " << timex.getMinutes() << endl;
	
	timex.setHours(12);
	timex.setMinutes(34);	
	
	cout << "Hours: " << timex.getHours() << endl;
	cout << "Minutes: " << timex.getMinutes() << endl;
	
}
