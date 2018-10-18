/*
 * Circle.cpp
 *
 *  Created on: Oct 8, 2016
 *      Author: alan
 */

#include <iostream>
#include "Shape.h"
using namespace std;


Circle::Circle( double r, int a, int b) : Point( a, b ) {

	dRadius=r;

}

void Circle::setRadius( double r ) {
	dRadius = (r >= 0 ? r : 0); //this is a trinary operator. Look it up.
}

double Circle::area() const {

	return 3.14159 * dRadius * dRadius;
}

