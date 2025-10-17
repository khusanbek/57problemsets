#include <iostream>
using namespace std;

int main() {
	
    int age, price = 0;
    
	cout << "Enter your age: ";
    cin >> age;
	
	if(age < 5) price = 0;
		if(age <= 12) price = 5;
		 if (age <= 59) price = 10; else price = 6;

    cout << "Ticket price: $" << price << endl;
    return 0;
}