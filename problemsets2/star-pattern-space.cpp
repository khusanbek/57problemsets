#include <iostream>
using namespace std;

int main() {
	
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  "; // two spaces for alignment
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
