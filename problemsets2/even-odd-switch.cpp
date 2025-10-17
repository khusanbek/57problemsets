#include <iostream>
using namespace std;

int main() {

	int number = 0;
	
	cout << "Enter number: ";
	cin >> number;
	
	if(number < 0) number = abs(number);
	
	switch (number % 2) {
		
		case 0:
			cout << number << " is even.\n";
			break;
		case 1:
			cout << number << " is odd.\n";
			break;
		
		default:
			cout << "Looking forward to the Weekend";
	}

	return 0;
}