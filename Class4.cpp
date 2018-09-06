// Class 4

/*
#include <iostream>
using namespace std;
int main2() {
	int i;
	for (i=0; i < 10000; i++) {
		cout << i << ',';
	}
	return 0;
}

#include <iostream>
using namespace std;
int main3() {
	int i, j;
	for (i=0; i < 100; i++) {
		for (j=0; j < 10; i++){
			cout << i << "=" << j << ',';
		}
	}
	return 0;
}

// square program - has an error
#include <iostream>
using namespace std;
int square( int ); //prototype
int main() {
	for(int i=1; i <= 10; i++) {
		cout << square( i ) << “ ”;
		cout << endl;
	}
	return 0;
}

//Function definition
int square( int y) {
	return y*y;
}
*/

#include <iostream>
using namespace std;
float drakeEquation(float, float, float, float, float, float, float);  // prototype
int main5() {
	float R, fp, ne, fl, fi, fc, L, N;
	
	cout << "Enter variables for the Drake Equation: " << endl;
	
	cout << " R = " ; cin >> R;
	cout << " fp = "; cin >> fp;
	cout << " ne = "; cin >> ne;
	cout << " fl = "; cin >> fl;
	cout << " fi = "; cin >> fi;
	cout << " fc = "; cin >> fc;
	cout << " L = "; cin >> L;
	
	
	/* Case 1
	R = 1.5;
	fp = 1;
	ne = 1;
	fl = 10e-5;
	fi = 10e-9;
	fc = 0.2;
	L = 304;
	*/
	
	/* Case 2
	R = 1.5;
	fp = 1;
	ne = 0.2;
	fl = 0.13;
	fi = 1;
	fc = 0.2;
	L = 10e9;
	*/

	float n = drakeEquation(R, fp, ne, fl, fi, fc, L);
	return n;
}

float drakeEquation(float R, float fp, float ne, float fl, float fi, float fc, float L) {
	float N;
	N = R*fp*ne*fl*fi*fc*L;
	
	if (N <= 100)
		cout << "We are alone. :(" << endl;
	else
		cout << "Aliens exist!" << endl;
	
	return N;
}


// Functions may have default values assigned
int boxVol(int length=3, int width=4, int height=5) {
	return length*width*height;
}

int main7(){
	cout << boxVol(3, 2) << endl;
}


// Call by reference vs Call by value
// Call by value copies the value
#include <iostream>
using namespace std;
int sqrByVal( int );
void sqrByRef( int & );
int main() {
	int x=2, y=4;
	cout << "X Bef: " << x << " "<<sqrByVal( x );
	cout << "\nx after: " << x << endl;
	cout << "y bef: " << y << " " << sqrByRef( y );
	cout << "\ny after: " << y << endl;
	return 0;
}

int sqrByVal(int iVal) {
	return iVal *= iVal;
}

void sqrByRef(int & iVal2) {
	iVal2 *= iVal2;
}


// Call by reference uses the exact memory location
