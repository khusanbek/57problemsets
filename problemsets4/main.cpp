
#include <iostream>
using namespace std;

#include "funct-list.h"

int main() {
  
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}