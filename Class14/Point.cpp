/*
 * Point.cpp
 *
 *  Created on: Oct 8, 2016
 *      Author: alan
 */
#include <iostream>
#include "Shape.h"
using namespace std;

Point::Point(int a, int b) {

	iX=a;
	iY=b;
	cout << "Point constructor: ";
	cout << "[" <<iX << ", " << iY << "]" <<endl;
}

void Point::setPoint( int a, int b) {
	iX=a;
	iY=b;
}

Point::~Point() {

	cout << "Point destructor: ";
	cout << "[" <<iX << ", " << iY << "]" <<endl;

}

