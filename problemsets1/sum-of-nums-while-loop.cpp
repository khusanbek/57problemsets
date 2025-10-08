#include <iostream>
using namespace std;

int main() {

    int input, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> input;

    while (i <= input) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
