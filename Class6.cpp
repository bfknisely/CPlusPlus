// Class 6
// Brian Knisely

#include <iostream>
using namespace std;

int main2() {
	char string1[] = "first";
	char string11[] = {'f','i','r','s','t','\0'};
	char string2[20];
	
	int anArray[2][3] = { {1,2,3}, {4,5,6}};
	
	cout << string1 << endl;
	cout << string11[1] << endl;
	cout << anArray[0][1] << endl;
	// Array indexing starts at 0. Index sub-element with square
	// brackets.
	
	/* Pointers allow for dynamically sized arrays
	int y = 5;
	int *yPtr;  // the * operator is used to create a pointer
	yPtr =& y;  // the & operator is used to assign the address
	
	cout << "\n" << yPtr << endl; 
	// this prints the pointer's address
	cout << *yPtr << endl; 
	this prints the value of the variable at the address */
	
	int y = 5;
	int *yPtr;
	yPtr = &y;
	cout << "The value of y: " << y << endl; // value of y
	cout << "Address y: " << &y << endl; // memory address of y
	cout << "Value of yPtr: "<< yPtr << endl; // value of yPtr (memory address)
	cout << "Value of *yPtr: "<< *yPtr << endl; // value of object being pointed to
	cout << "Value of &*yPtr: "<< &*yPtr << endl; // address of object being pointed to
	cout << "Value of &yPtr: "<< &yPtr << endl; // address of pointer
	
	float y3;
	float *defaultPointer = &y3;
	cout << "\ndefault pointer: " << defaultPointer << endl;
	cout << "\npointed object: " << *defaultPointer << endl;
	if (*defaultPointer == 0) {
		cout << "Default zero" << endl;}
	else {
		cout << "Self destruct" << endl;}
		
	return 0;
}


#include <iostream>
using namespace std;
int cubeByValue(int);
void cubeByReference(int*);

int main() {
	int *yPtr;
	int number5 = 5;
	int number4 = 4;
	int newNumber = cubeByValue(number5);
	cubeByReference(&number4);
	cout << "newNumber: " << newNumber << endl;
	cout << "number5: " << number5 << endl;
	cout << "number4: " << number4 << endl;
	
	// Sets of strings
	const char *suit = {"Hearts", "Diamonds", "Clubs", "Spades"};
	cout << "suit" << *suit << endl;
	return 0;
}

int cubeByValue(int n) {
	return n*n*n;
}

void cubeByReference(int* nPtr) {
	*nPtr = (*nPtr) * (*nPtr) * (*nPtr);
	return;
}
