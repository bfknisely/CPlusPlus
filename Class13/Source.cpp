#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;

int main() {
	Cylinder myBeer(5.7, 2.5, 12, 23);
	cout << "X: " << myBeer.getX() << endl;
	cout << "Y: " << myBeer.getY() << endl;
	cout << "R: " << myBeer.getRadius() << endl;
	cout << "H: " << myBeer.getHeight() << endl;
	
	myBeer.setRadius(4.25);
	myBeer.setHeight(10);
	myBeer.setPoint(2, 2);
	cout << "X: " << myBeer.getX() << endl;
	cout << "Y: " << myBeer.getY() << endl;
	cout << "R: " << myBeer.getRadius() << endl;
	cout << "H: " << myBeer.getHeight() << endl;
}


