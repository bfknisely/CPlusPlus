// Class 7

void swap (int * ptrOne, int * ptrTwo){
	int temp;
	temp = *ptrOne;
	*ptrOne = *ptrTwo;
	*ptrTwo = temp;
}

void bubbleSort( int* array, const int size) {
	for( int i=0;i<size-1;i++) {
		for( int j=0;j<size-1;j++) {
			if(array[j] > array[j+1])
				swap( &array[j], &array[j+1] );
		}
	}
}

#include <iostream>
using namespace std;

int main() {
	void swap(int * ptrOne, int * ptrTwo);
	void bubbleSort(int* array, const int size);
	int myArray[7]; //] = {4, 7, 2, 5, 9, 1, 3};
	cout << myArray << endl;
	bubbleSort(*myArray, size(myArray))
	cout << myArray << endl;
}
