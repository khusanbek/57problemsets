#include <iostream>
using namespace std;

int main() {
	
    int num;
	
    cout << "Enter a number: ";
    cin >> num;

	if (num / 2 * 2 == num)
		cout << "Even";
	else
		cout << "Odd";


    return 0;
}
