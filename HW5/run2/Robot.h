#ifndef ROBOT_H
#define ROBOT_H
class Robot {
	public:  // member functions
		Robot(const int);
		int getXpos() const;
		int getYpos() const;
		void setXpos(int);
		void setYpos(int);
		void MoveJump();
		void MoveDiagonal(int);
		bool CheckConflict(Robot) const;
		const int getSerialNumber() const;
		int getProductNumber() const;
		void setProductNumber(int);
		void setPtrRobot(Robot*);
		~Robot();
		
	private:  // data members
		Robot* ptrRobot;
		int iXpos;
		int iYpos;
		const int iSerialNumber;
		int iProductNumber;
};
#endif

