#include <iostream>
using namespace std;

int maxNumber(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Largest = " << maxNumber(num1, num2) << endl;
    return 0;
}
