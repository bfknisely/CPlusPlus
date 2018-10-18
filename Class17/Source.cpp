#include <iostream>
#include "Node.h"
using namespace std;

int main() {
	Node* ndPtr1 = new Node();
	ndPtr1->setData(21);
	Node* ndPtr2 = new Node();
	ndPtr2->setData(13);
	Node* ndPtr3 = new Node();
	ndPtr3->setData(33);
	Node* ndPtr4 = new Node();
	ndPtr4->setData(78);
	Node* ndPtr5 = new Node();
	ndPtr5->setData(22);
	
	ndPtr1->setNodePtr(ndPtr2);	
	ndPtr2->setNodePtr(ndPtr4);
	ndPtr3->setNodePtr(ndPtr4);
	ndPtr4->setNodePtr(ndPtr5);
	
	// Assign the first pointer to myNodePtr
	Node* myNodePtr = ndPtr1;
	float* myMax;	
	int i = 0;
	
	while(1) {
		
		// If the next pointer is empty, end the while loop
		if (myNodePtr->getNodePtr() == 0) {
			break;
		}
		else {
			// Increase length index by 1
			i++;
					
			// Print current index and value
			cout << i << ": " << myNodePtr->getData() << endl;
			
			// Assign myNodePtr to the next pointer in the list
			myNodePtr = myNodePtr->getNodePtr();
		}
				
	}
	
	return 0;
}
