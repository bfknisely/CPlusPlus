/*
Brian Knisely
Homework 6, Problems 4-5
 */

#ifndef POINT_H
#define POINT_H


class Point {

public:
	Point(int, int);
	void setPoint( int, int);
	int getX() const {return iX;}
	int getY() const {return iY;}
	virtual double area() const;
	virtual double perimeter() const;
	~Point();

protected:
	int iX,iY;
};


#endif /* POINT_H_ */

#ifndef QUADRILLATERAL_H
#define QUADRILLATERAL_H

class Quadrillateral : public Point {

public:
	Quadrillateral(double dHeight1, double dWidth1, double dHeight2, double dWidth2, int x, int y);
	void setHeight1( double );
	void setWidth1( double );
	void setHeight2( double );
	void setWidth2( double );
	double getHeight1() const { return dHeight1; }
	double getWidth1() const { return dWidth1; }
	double getHeight2() const { return dHeight2; }
	double getWidth2() const { return dWidth2; }
	double area() const {return 0;}
	double perimeter() const {return dHeight1+dWidth1+dHeight2+dWidth2;}
	
	~Quadrillateral();

protected:
	double dHeight1, dWidth1, dHeight2, dWidth2

};

#endif /* QUADRILLATERAL_H */

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

class Parallelogram : public Quadrillateral {
	
public:
	Parallelogram(double dHeight1, double dWidth1, double Angle, int x, int y);
	void setAngle(double);
	double getAngle() const {return dAngle;}
	double area() const {return dHeight1*dWidth1;}
	double perimeter() const {return (dHeight1*2 + dWidth1*2);}
	~Parallelogram();

protected:
	double dAngle;
	
};

#endif // Parallelogram_h


#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Parallelogram{

public:
	Rectangle(double dHeight1, double dHeight1, int x, int y);
	double area() const {return dHeight1*dWidth1;}
	double perimeter() const {return (dHeight1*2 + dWidth1*2);}
	~Rectangle();
};

#endif // Rectangle_h


#ifndef SQUARE_H
#define SQUARE_H

class Square: public Parallelogram{
public:
	Square(double dHeight1, int x, int y);
	double area() const {return dHeight1*dHeight1;}
	double perimeter() const {return (dHeight1*4);}
	~Square();	
};
	
#endif // Square_h
