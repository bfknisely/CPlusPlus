#include <iostream>
#include "Robot.h"
using namespace std;

int main() {
	Robot one(UAV);
	Robot two(UAV);
	
	if (one == two)
		cout << "Equal" << endl;
		
	return 0;
}

