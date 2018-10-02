enum ROBOT_TYPE {UAV, USV, UUV, HUMANOID};

#ifndef ROBOT_H
#define ROBOT_H
class Robot {
	public:
		Robot(ROBOT_TYPE);
		
		bool operator==(const Robot&);
		bool operator>(const Robot&);
		// Take in an external Robot, add to internal Robot, and
		// return a new Robot object.
		
		const Robot& operator-(const Robot&);
		
		int iSerialNumber;
		ROBOT_TYPE botType;
		int dHeight;
		
	private:
		
		
};
#endif
