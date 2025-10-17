#include <iostream>
using namespace std;

double getTicketPrice(int age) {
    
	if (age < 5)
        return 0;
    else if (age <= 12)
        return 5;
    else if (age <= 59)
        return 10;
    else
        return 6;
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Ticket price: $" << getTicketPrice(age) << endl;
    return 0;
}
