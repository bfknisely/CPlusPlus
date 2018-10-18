#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include "Home.h"
using namespace std;

class House : public Home {
	public: 
		House;
		void name() {
			cout << "This is a thing" << endl;
		};
};
#endif
