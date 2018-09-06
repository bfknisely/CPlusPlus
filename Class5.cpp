/* Class 5
Tuesday, September 4

Recursive functions
Constant definitions
Arrays and pointers
*/


#include <iostream>
using namespace std;
int fibonacci(int n);  // prototype
#define PI_NUMBER 3.14  // constant definition

// prototype and function definition inline
inline float square(float x) {return x*x;}

int main() {
	int iNum;
	float fNum;
	const float fPi=3.141592654;
	cout << "Enter an int: " << endl;
	cin >> iNum;
	fNum = PI_NUMBER; 
	iNum = fibonacci(iNum);
	cout << "Fib: " << iNum <<endl;
	cout << "Square: " << square(fPi) << endl;
	return 0;
}

int fibonacci(int n) {
	if( n==0 || n==1 )
		return n;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

