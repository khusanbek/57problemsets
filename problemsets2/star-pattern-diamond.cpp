#include <iostream>
using namespace std;

int main() {
	
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Upper half of diamond
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
