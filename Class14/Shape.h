#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
	public:
		virtual double area() const {return 0;};
		virtual double volume() const {return 0;};

};

class Point : public Shape {
	public:
		Point(int, int);
		void setPoint( int, int);
		int getX() const {return iX;}
		int getY() const { return iY;}
		~Point();
	
	private:
		int iX, iY;
};

class Circle : public Point {
	public:
		Circle(double r, int x, int y);
		void setRadius( double );
		double getRadius() const { return dRadius; }
		virtual double area() const;
	protected:
		double dRadius;
};

class Cylinder : public Circle {
	public:
		Cylinder (double h, double r, int x, int y);
		void setHeight( double h);
		double getHeight() const{ return dHeight;}
		virtual double area() const;
		virtual double volume() const;
	protected:
		double dHeight;
};

#endif
