/* 
Brian Knisely
AERSP 424
Homework 1
Due 2018-08-30
*/


/////////////////////////////////////////////////////////////////
/* Problem 1

Problem 1a
// This code will compute the sum of three integers.

Problem 1b
int x, y, z, result;

Problem 1c
cout << "Enter three integers, one at a time: ";

Problem 1d
cin >> x; cin >> y; cin >> z;

Problem 1e
result = x + y + z;

Problem 1f
cout << "The sum is: " << result << endl;

Problem 1g
return 0;

End of Problem 1*/

/////////////////////////////////////////////////////////////////
// Problem 2

// This code will compute the sum of three integers.
#include <iostream>
using namespace std;

int main(){
	int x, y, z, result;
	cout << "This code will compute the sum of three integer inputs." << endl;
	cout << "Enter three integers, one at a time: " << endl; 
	cin >> x; cin >> y; cin >> z;
	result = x + y + z;
	cout << "The sum is: " << result << endl;
	return 0;
}
/*
End of Problem 2*/

/////////////////////////////////////////////////////////////////
/* Problem 3

Below is the printout for the given code:

Size of char : 1
Size of int : 4
Size of short int : 2
Size of long int : 4
Size of float : 4
Size of double : 8

End of Problem 2*/

/////////////////////////////////////////////////////////////////
/* Problem 4

Problem 4a - The "int" declaration must be lowercase 
			 and a semicolon is needed to end the statement.

int happy;


Problem 4b - Void function definitions cannot return values.
			 Either the void must be changed to int or the 
			 return must be removed.

int main() {
 return 1;
}

OR

void main() {

}


Problem 4c - Logical comparisons need two equals signs.
			 One equals is assigment and will always be True. 
			 Adding spaces around operators improves readability.

if(a == b)
	cout << "result1" << endl;
else
	cout << "result2" << endl;


Problem 4d - A function defined with int must return a value.
			 Either a value must be added after return, or
			 the definition should be done with void instead.

int foo(int temp) {
	cout << temp;
	return 0;
}

OR

void foo(int temp) {
	cout << temp;
}

End of Problem 4*/

