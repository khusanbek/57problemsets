#include <iostream>
using namespace std;

int main() {
    
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int evenCount = 0, oddCount = 0;

    cout << "Enter 10 numbers:\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    if (n1 % 2 == 0) evenCount++; else oddCount++;
    if (n2 % 2 == 0) evenCount++; else oddCount++;
    if (n3 % 2 == 0) evenCount++; else oddCount++;
    if (n4 % 2 == 0) evenCount++; else oddCount++;
    if (n5 % 2 == 0) evenCount++; else oddCount++;
    if (n6 % 2 == 0) evenCount++; else oddCount++;
    if (n7 % 2 == 0) evenCount++; else oddCount++;
    if (n8 % 2 == 0) evenCount++; else oddCount++;
    if (n9 % 2 == 0) evenCount++; else oddCount++;
    if (n10 % 2 == 0) evenCount++; else oddCount++;

    cout << "\nAmount of even numbers = " << evenCount << endl;
    cout << "Amount of odd numbers  = " << oddCount << endl;

    return 0;
}
