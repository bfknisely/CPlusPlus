#include <iostream>
using namespace std;
int main() {
	float product, y;
	for (y=3.4; y <= 15.4; y++) {
		product = 0.1;
		product *= y;
		cout << "The product is: " << product << endl;
	}
}

