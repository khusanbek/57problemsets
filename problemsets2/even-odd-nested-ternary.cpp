#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << ((n > 0) ? 
                ((n % 2 == 0) ? "Positive Even" : "Positive Odd") : 
                ((n % 2 == 0) ? "Negative Even" : "Negative Odd")) 
         << endl;

    return 0;
}
