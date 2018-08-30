#include <iostream>
using namespace std;

int main() {
	// int iNumber1;
	// cout << "Enter a number between 0-10: " << endl;
	// cin >> iNumber1;
	int i;
	for (i=0; i < 10; i++) {
		if (i == 5){
			continue;
		}
		cout << i << ',';
	}
	cout << "\n Loop ended at " << i << endl;
	return 0;
}
