enum ROOBOT_TYPE {UAV, USV, UUV, HUMANOID};

class Roobot {
	public:
		Roobot();
		ROOBOT_TYPE getType();
		void setType(ROOBOT_TYPE);
		
	private:
		int iNumLegs;
		ROOBOT_TYPE botType;
		int iXPos;
		int iYPos;
};
