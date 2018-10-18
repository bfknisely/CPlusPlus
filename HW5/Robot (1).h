#ifndef ROBOT_H
#define ROBOT_H
class Robot {
	public:  // member functions
		Robot(); //const int iSerialNumber);
		int getXpos();
		int getYpos();
		void setXpos(int);
		void setYpos(int);
		void MoveJump();
		void MoveDiagonal(int);
		bool CheckConflict(Robot);
		const int getSerialNumber();
		
		
	private:  // data members
		int iXpos;
		int iYpos;
		//const int iSerialNumber;
};
#endif
