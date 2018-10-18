/*
 * Cylinder.cpp
 *
 *  Created on: Oct 8, 2016
 *      Author: alan
 */

#include "Circle.h"
#include "Cylinder.h"

Cylinder::Cylinder( double h, double r, int x, int y): Circle( r, x, y) {
	dHeight=h;
}

void Cylinder::setHeight( double h) {
	dHeight= (h>=0 ? h:0);
}

double Cylinder::area() const {

	return 2*Circle::area() + 2 * 3.14159 * dHeight * dRadius;
}
