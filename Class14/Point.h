/*
 * Point.h
 *
 *  Created on: Oct 8, 2016
 *      Author: alan
 */

#ifndef POINT_H_
#define POINT_H_


class Point {

public:
	Point(int, int);
	void setPoint( int, int);
	int getX() const {return iX;}
	int getY() const {return iY;}
	~Point();

protected:
	int iX,iY;
};



#endif /* POINT_H_ */
