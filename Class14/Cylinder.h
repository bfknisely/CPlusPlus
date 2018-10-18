/*
 * Cylinder.h
 *
 *  Created on: Oct 8, 2016
 *      Author: alan
 */

#ifndef CYLINDER_H_
#define CYLINDER_H_


#include "Circle.h"

class Cylinder : public Circle {

public:
	Cylinder (double h, double r, int x, int y);
	void setHeight( double h);
	double getHeight() const	{ return dHeight;	}
	double area() const;
	double volume() const;

protected:
	double dHeight;
};


#endif /* CYLINDER_H_ */
