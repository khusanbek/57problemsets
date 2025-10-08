#include <iostream>
using namespace std;

int main() {

    int num, oddCount = 0, evenCount = 0;

    cout << "Enter 10 numbers:\n";

    for (int i = 1; i <= 10; i++) {
        cout << "Number " << i << ": ";
        cin >> num;

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "\nCount of even numbers = " << evenCount << endl;
    cout << "Count of odd numbers  = " << oddCount << endl;

    return 0;
}
