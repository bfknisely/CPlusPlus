#include <iostream>
#include "Base.h"
#include "Shape.h"
using namespace std;

void printArray( const Shape*);
int main() {
	
	
	Derived dClass;
	Base* foo = &dClass;
	
	//foo->print();
	//foo->show();
	
	Point point( 7, 11);
	Circle circle( 3.5, 22, 8 );
	Cylinder cylinder( 10, 3.3, 10, 10);
	Shape* arrayOfShapes[3];
	arrayOfShapes[0]=&point;
	arrayOfShapes[1]=&circle;
	arrayOfShapes[2]=&cylinder;
	for(int i=0; i<3; i++)
		printArray(arrayOfShapes[i] );
	
	
	return 1;
}

void printArray( const Shape* baseClassPtr) {
	cout << baseClassPtr->area() <<endl;
}
