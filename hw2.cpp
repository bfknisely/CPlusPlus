/* 
Brian Knisely
AERSP 424
Homework 2
*/

/////////////////////////////////////////////////////////////////
/* Problem 1

Problem 1a
float product, y;

Problem 1b
y = 3.4;

Problem 1c
product = 0.1;

Problem 1d
product *= y;

Problem 1e
cout << "The product is: " << product << endl;

End of Problem 1*/


/////////////////////////////////////////////////////////////////
// Problem 2

#include <iostream>
using namespace std;
int main2() {
	float product, y;
	for (y=3.4; y <= 15.4; y++) {
		product = 0.1;
		product *= y;
		cout << "The product is: " << product << endl;
	}
}

// End of Problem 2


/////////////////////////////////////////////////////////////////
/* Problem 3

Problem 3a
cin >> int x;

Problem 3b
cin >> int y;

Problem 3c
int i = 1;

Problem 3d
int power = 1;

Problem 3e
power *= x;

Problem 3f
i += 1;

Problem 3g
if (i <= y) {
	// do something
}

Problem 3h
cout << power << endl;

End of Problem 3*/


/////////////////////////////////////////////////////////////////
// Problem 4

#include <iostream>
using namespace std;
int powerProgram() {
	int x, y;
	cout << "Enter an integer for x: ";
	cin >> x;
	cout << "Enter an integer for y: ";
	cin >> y;
	int i = 1;
	int power = 1;
	while (i <= y) {
		power *= x;
		i += 1;
	}
	cout << x << "^" << y << " = " << power << endl;
	return 0;
}

// End of Problem 4


/////////////////////////////////////////////////////////////////
// Problem 5

#include <iostream>
int doubling() {
	int a = 2;
	int iter = 0;
	while (a > 0) {
		cout << iter << ": " << a << endl;
		a *= 2;
		iter += 1;
	}
	return 0;
}

/* 
This program keeps doubling the variable "a" until the size of the
integer exceeds the amount of memory allocated to the "int" data type,
and then it stops.

The final output from this program is:
29: 1073741824

This means the final number is 2^30 = 1073741824.

The program went through 30 iterations (first loop was indexed 0).

// End of Problem 5


/////////////////////////////////////////////////////////////////
/* Problem 6

Problem 6a
When using cout, use less than signs (<<), not greater than (>>)

cout << output;

Problem 6b
Logical comparisons need double equals (==).
All opened brackets must be closed { }.
Indentation is more proper and readable than not indenting.

while (x == 4) {
	++c;
}

Problem 6c
Use a += b to increment a by b, not "=+".
Indentation is more proper and readable than not indenting.
Brackets ensure loops are scoped properly.

if (y > 3) {
	sum += 5;
}

Problem 6d
Else statements do not use a semicolon.
"endif" is not used in C++.
Brackets ensure loops are scoped properly.

if (hw == 1) {
	cout << "Good" << endl;
} 
else {
	cout << "Bad" << endl;
}

End of Problem 6 */

