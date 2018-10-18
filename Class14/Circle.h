/*
 * Circle.h
 *
 *  Created on: Oct 8, 2016
 *      Author: alan
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Point.h"

class Circle : public Point {

public:
	Circle(double r, int x, int y);
	void setRadius( double );
	double getRadius() const { return dRadius; }
	double area() const;

protected:
	double dRadius;
};


#endif /* CIRCLE_H_ */
