#include <iostream>
using namespace std;

int main() {
	
    int num;
    cout << "Enter a number (up to 4 digits): ";
    cin >> num;

    if (num < 0) num = -num; // handle negatives

    if (num >= 1000)
        cout << "Number of digits: 4" << endl;
    else if (num >= 100)
        cout << "Number of digits: 3" << endl;
    else if (num >= 10)
        cout << "Number of digits: 2" << endl;
    else
        cout << "Number of digits: 1" << endl;

    return 0;
}
