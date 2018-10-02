/* 
Brian Knisely
AERSP 424
Homework 4
*/

/////////////////////////////////////////////////////////////////
/* Problem 1 

Problem 1a
float fNumber1, fNumber2;
fNumber1 = 7.3;

Problem 1b
float *fPtr;

Problem 1c
fPtr = &fNumber1;

Problem 1d
cout << "*fPtr = " << *fPtr << endl;

Problem 1e
*fPtr = fNumber2;

Problem 1f
cout << "fNumber2 = " << fNumber2 << endl;

Problem 1g
cout << "&fNumber1 = " << &fNumber1 << endl;

Problem 1h
cout << "&fPtr = " << &fPtr << endl;

No, the address of fPtr is different from the address of fNumber1.
The value of fPtr is equal to the address of fNumber1.

End of Problem 1 */


/////////////////////////////////////////////////////////////////
/* Problem 2

Problem 2a
int *iPtr1 = new int;
int *iPtr2 = new int;

Problem 2b
cout << "Value of iPtr1: " << iPtr1 << endl;
cout << "Value pointed to by iPtr1: " << *iPtr1 << endl;
cout << "Value of iPtr2: " << iPtr2 << endl;
cout << "Value pointed to by iPtr2: " << *iPtr2 << endl;

Problem 2c
*iPtr1 = 3;
*iPtr2 = 6;

Problem 2d
cout << "Value pointed to by iPtr1: " << *iPtr1 << endl;
cout << "Value pointed to by iPtr2: " << *iPtr2 << endl;

Problem 2e
iPtr1 = iPtr2;

Problem 2f
cout << "Value pointed to by iPtr1: " << *iPtr1 << endl;
cout << "Value pointed to by iPtr2: " << *iPtr2 << endl;

Problem 2g
The memory location containing 3 was lost when the pointer was 
changed. This is a memory leak. The value can only be accessed
again if the memory location was saved to another pointer
before iPtr1 was changed.

End of Problem 2 */


/////////////////////////////////////////////////////////////////
// Problem 3

#include <iostream>
#include <stdlib.h>  // srand, rand
#include <time.h>  // time
using namespace std;

int main() {
	
	const char *cSuitsPtr[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
	const char *cValuesPtr[13] = {"Ace", "Two", "Three", "Four", "Five",
	"Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	
	srand(time(0));
	for (int i = 0; i < 2; i++) {
		int randSuit = rand() % 4;
		int randValue = rand() % 13;
		cout << "Random Card " << i+1;
		cout << " = " << cValuesPtr[randValue];
		cout << " of " << cSuitsPtr[randSuit] << endl;
	}
	
	return 0;
}

// End of Problem 3 


/////////////////////////////////////////////////////////////////
/* Problem 4

Problem 4a
The pointer value is a memory location. Incrementing the
value is not valid. The pointed value can be incremented instead.
++*iPtr; 

Problem 4b
The values themselves are accessed with *iPtr
//use pointer to get first element of array 
iNumber = iPtr[0]; 
cout << "iNumber" << iNumber << endl;

Problem 4c
Parentheses are used to access pointer array values.
//assign array element 2 (the value 3) to number 
iNumber = *(iPtr + 2); 

Problem 4d
Use parens with +index for pointer indexing.
//print the entire array n 
for( int i=0; i<=7; i++){
	cout << *(iPtr+i) << endl; 
}

Problem 4e
iNumber is type int, but aPtr is type void.
Void cannot be assigned to an int.

Problem 4f
Increment is not defined for array of ints.
Must add one at a time.
for( int i=0; i<=7, i++){
	++*(iPtr+i);
}

//End of Problem 4 */
