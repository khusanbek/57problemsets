#include <iostream>
#include <cmath>    // for M_PI and pow()
#include <iomanip>  // for setprecision
using namespace std;

// Function to calculate the area of a circle
double circleArea(double radius) {
    return M_PI * pow(radius, 2);  // Area = πr²
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (!cin || radius <= 0) {
        cout << "Invalid input! Please enter a positive number." << endl;
        return 1;
    }

    double area = circleArea(radius);

    cout << fixed << setprecision(2);
    cout << "The area of the circle with radius " << radius << " is " << area << endl;

    return 0;
}
