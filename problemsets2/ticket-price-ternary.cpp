#include <iostream>
using namespace std;

int main() {
    
	int age;
    double price;
    
	cout << "Enter your age: ";
    cin >> age;

    int category = (age < 5) ? 0 :
                   (age <= 12) ? 1 :
                   (age <= 59) ? 2 : 3;

    switch (category) {
        case 0: price = 0; break;
        case 1: price = 5; break;
        case 2: price = 10; break;
        default: price = 6; break;
    }

    cout << "Ticket price: $" << price << endl;
    return 0;
}
