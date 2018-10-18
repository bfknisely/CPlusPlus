
#ifndef MACHINE_H
#define MACHINE_H
#include <string>

using namespace std;

class Machine {
	
	public:
		Machine();
		int getWeight() const;
		void setWeight(int);
		~Machine();	
		string getName() const;
		void setName(string);	
		int* getGoalWeight() const;
		void setGoalWeight(int&);
		
	protected:
		int iWeight;
		string sName;
		int* iGoalWeight;
};

#endif
