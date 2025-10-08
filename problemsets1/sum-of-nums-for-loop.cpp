#include <iostream>
using namespace std;

int main() {
    
	int input, sum = 0;
    cout << "Enter a number: ";
    cin >> input;

    for (int i = 1; i <= input; i++) {
        
		sum += i;
    }

	cout << "Sum of numbers (for loop) from 1 to " << input << " is: " << sum << endl;
	
    return 0;
}
