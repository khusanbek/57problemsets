#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    if (num < 0) num = -num; // handle negatives

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    int sum = d1 + d2 + d3 + d4;

    cout << "Sum of digits = " << sum << endl;
	
    return 0;
}
