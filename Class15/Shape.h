#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
	public:
		virtual double area() const {return 0;};
		virtual double volume() const {return 0;};

		virtual void name() const=0;
};

class Circle : public Shape {
	public:
		Circle(double r, int x, int y);
		void setRadius( double );
		double getRadius() const { return dRadius; }
		double area() const;
		void name(int x) {cout<<x};
	protected:
		double dRadius;
};

#endif
