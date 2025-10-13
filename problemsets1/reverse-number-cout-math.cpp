#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int d1 = num % 10 * 1000; // 4th digit
    int d2 = num / 10 % 10 * 100; // 3rd digit
    int d3 = num / 100 % 10 * 10; // 2nd digit
    int d4 = num / 1000; // 1st digit

    cout << "Reversed number: " << ( d4 + d3 + d2 + d1 ) << endl;
    return 0;
}
