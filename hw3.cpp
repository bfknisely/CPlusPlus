/* 
Brian Knisely
AERSP 424
Homework 3
Due 2018-08-30
*/


/////////////////////////////////////////////////////////////////
/* Problem 1
a. x is in the block scope of the main function.

b. y is in the block scope of the cube function.
End of Problem 1 */


/////////////////////////////////////////////////////////////////
/* Problem 2

Problem 2a
Output:
1
8
27
64
125
216
343
512
729
1000

Problem 2b
double cubeDouble(double y) {
	return y*y*y;
}

Problem 2c
int cubeByValue(int y) {
	return y*y*y;
}

Problem 2d
void cubeByReference(int &y) {
	y *= y*y;
}


Problems 2e and 2f - see code below */

#include <iostream>
using namespace std;

int cubeByValue(int x);
void cubeByReference(int &x);
int main0() {
	int xValue = 3;
	int xReference = 6;
	cout << "xValue = " << xValue << endl;
	cout << "cubeByValue(xValue) = ";
	cout << cubeByValue(xValue) << endl;
	cout << "xValue = " << xValue << endl;
	// Problem 2e
	// The value of xValue has NOT been changed because
	// the variable was passed by value
	cout << "xReference = " << xReference << endl;
	cout << "cubeByReference(xReference)\n";
	cubeByReference(xReference);	
	// Problem 2f
	// The value of xReference has been changed because
	// the variable was passed by reference
	cout << "xReference = " << xReference << endl;
}

int cubeByValue(int x) {
	return x*x*x;
}

void cubeByReference(int &x) {
	x *= x*x;
}

//End of Problem 2


/////////////////////////////////////////////////////////////////
/* Problem 3 */
// Problem 3a

#include <iostream>
#include <stdlib.h>  // srand, rand
#include <time.h>  // time
using namespace std;
unsigned long factorial(unsigned long x);

int main1() {
	unsigned long input = 6;
	unsigned long x = factorial(input);
	cout << "factorial(" << input << ") = " << x << endl;
	return 0;
}

unsigned long factorial(unsigned long x) {
	if (x == 0)
		return 1;
	else
		return x*factorial(x-1);
}

// Problem 3b

int main2() {
   srand(time(0));
   for (int i = 0; i < 3; i++) {
      int randNum = rand() % 8 + 5;
      unsigned long x = factorial(randNum);
      cout << "factorial(" << randNum << ") = " << x << endl;
   }
}

//End of Problem 3


/////////////////////////////////////////////////////////////////
/* Problem 4 */

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

float printPi() {
	cout << fixed;
    cout << setprecision(2);
	cout << "Pi = " << M_PI << endl;
}

//End of Problem 4


/////////////////////////////////////////////////////////////////
/* Problem 5 */

int quatric(int x) {
	return x*x*x*x;
}
 
// Problem 5a
double quatric(double x) {
	return x*x*x*x;
}

// Problem 5b
float quatric(float x) {
	return x*x*x*x;
}


// Problem 5c
char quatric(char x) {
	return x*x*x*x;
}

// Problem 5d
bool quatric(bool x) {
	return x*x*x*x;
}

int main3(){
	// Problem 5e
	int v = quatric(2);
	double w = quatric(2.5);
	float x = quatric(3.5);
	char y = quatric("Capybaras");
	bool z = quatric(true);
	cout << "v = " << v << endl;
	cout << "w = " << w << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}

/* Problem 5f

int quatric(float x){
	return x*x*x*x
}

This code results in a compile error.
[Error] ambiguating new declaration of 'int quatric(float)'

Functions cannot have the same return type AND the same name.
If they have the same name, they must return different types.*/

//End of Problem 5


/////////////////////////////////////////////////////////////////
/* Problem 6 

Problem 6a.
Functions with no inputs should have empty brackets

int oneFunction() {
	cout << “Inside ONE FUNCTION” << endl;
	int twoFunction() {
		cout << “Inside TWO FUNCTION” << endl;
	}
}

Problem 6b.
The "int" before calculateSum means that it must return
an integer. The function now returns the result.

int calculateSum( int x, int y) {
	int result;
	result = x + y;
	return result;
}

Problem 6c.
Else sequence was missing a return.

int calculateSum (int n) {
	if(n == 0)
		return 0;
 	else
		return n + calculateSum(n-1);
}


Problem 6d.
Semicolon does not belong in a function definition
Data type of "a" was already declared.
We do not want to redefine a; we want to use the input.


void printFloat( float a) {
	cout << a << endl;
}



Problem 6e.
"Smart quotes" are not accepted. Must use standard double-quotes.
Functions with no inputs have empty parens ().
Void functions do not return values.
Function must be declared with return type (int).

int calculateProduct() {
	int a, b, c, result;
	cout << "Enter three integers: ";
	cin >> a >> b >> c;
	result = a * b * c;
	cout << "Result is " << result;
	return result;
}

End of Problem 6 */

