#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " is " << ((n & 1) ? "Odd" : "Even") << endl;
    return 0;
}
