#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    double prices[] = {0, 5, 10, 6};
    int category;

    if (age < 5)
        category = 0;
    else if (age <= 12)
        category = 1;
    else if (age <= 59)
        category = 2;
    else
        category = 3;

    cout << "Ticket price: $" << prices[category] << endl;
    return 0;
}
