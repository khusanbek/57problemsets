#include <iostream>
using namespace std;

int main() {
	
    int age;
    
	cout << "Enter your age: ";
    cin >> age;

    double price = (age < 5) ? 0 :
                   (age <= 12) ? 5 :
                   (age <= 59) ? 10 : 6;

    cout << "Ticket price: $" << price << endl;
    return 0;
}