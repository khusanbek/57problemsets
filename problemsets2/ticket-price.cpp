#include <iostream>
using namespace std;

int main() {
    
	int age;
    double ticketPrice;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 5) {
        ticketPrice = 0;
    } else if (age >= 5 && age <= 12) {
        ticketPrice = 5;
    } else if (age >= 13 && age <= 59) {
        ticketPrice = 10;
    } else {
        ticketPrice = 6;
    }

    cout << "Ticket price: $" << ticketPrice << endl;

    return 0;
}
