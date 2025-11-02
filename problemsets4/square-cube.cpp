#include <iostream>
using namespace std;

// Function to calculate square
int square(int n) {
    return n * n;
}

// Function to calculate cube
int cube(int n) {
    return n * n * n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " = " << square(num) << endl;
    cout << "Cube of " << num << " = " << cube(num) << endl;

    return 0;
}
