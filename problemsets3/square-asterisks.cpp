#include <iostream>
using namespace std;

// Function to display a solid square of asterisks
void squareOfAsterisks(int side) {
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    if (!cin || side <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 1;
    }

    cout << "\nSquare of asterisks:\n";
    squareOfAsterisks(side);

    return 0;
}
