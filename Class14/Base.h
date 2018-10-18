#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;

class Base {
	
	public:
		virtual void print() { cout << "print base" << endl; }
	
		void show() { cout << "show base" << endl;}
		
};


class Derived : public Base {
	
public:
	void print() {
		cout << "print derived" << endl;
	}	
	
	void show() {
		cout << "show derived" << endl;
	}
	
};


#endif
