#include <iostream>
using namespace std;

int main() {
    
	int input;
    cout << "Enter a number: ";
    cin >> input;

    int sum = input * (input + 1) / 2; // formula for 1 + 2 + ... + N

    cout << "Sum of numbers (formula) from 1 to " << input << " is: " << sum << endl;

    return 0;
}