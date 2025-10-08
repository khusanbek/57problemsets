#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    cout << "Reversed number: " << d4 << d3 << d2 << d1 << endl;
    return 0;
}
