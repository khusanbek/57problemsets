#include <iostream>
#include <string>

using namespace std;

void printDiamondSymbol(int rows, string symbol) {
	
	// Upper half of diamond
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

int main() {
	
    int rows;
	string symbol;
	
    cout << "Enter number of rows: ";
    cin >> rows;
	
	cout << "Enter character to use: ";
    cin >> symbol;

	printDiamondSymbol(rows, symbol);

    return 0;
}
