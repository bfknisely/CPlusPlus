// Place all prototypes and initialization in the header file

#ifndef CLOCK_H
#define CLOCK_H
class Clock {
	public:
		Clock();
		int getHours();
		int getMinutes();
		void setHours(int);
		void setMinutes(int);
		
	private:
		int iHours;	
		int iMinutes;	
};
#endif

