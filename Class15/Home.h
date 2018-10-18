#ifndef HOUSE_H
#define HOUSE_H

class Home {
	public:
		Home;
		virtual double area() const {return -1;}
		virtual double volume() const {return -1;}
		
		virtual void name() const=0;
};

#endif
