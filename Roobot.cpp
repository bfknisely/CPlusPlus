#include "Roobot.h"

Roobot::Roobot() {
	iNumLegs = 0;
	iXPos = 1;
	iYPos = 2;
}

Roobot::Roobot(int x, int y) {
	iXPos = x;
	iYPos = y;
}

Roobot::Roobot(ROOBOT_TYPE x) {
	botType = x;
}
