#include <iostream>
using namespace std;

int main() {
	
    int number = 0;
    
	cout << "Enter a number: ";
    cin >> number;

    // Using ternary operator to check even or odd
    cout << number << " is " << ((number % 2 == 0) ? "Even" : "Odd") << endl;

    return 0;
}
