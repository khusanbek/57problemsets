#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours, minutes;
    double totalMinutes, speed = 1.0;

    cout << "Enter video length:" << endl;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;

    totalMinutes = hours * 60 + minutes;

    cout << "\nChoose playback speed:" << endl;
    cout << "1. 1.25x" << endl;
    cout << "2. 1.5x" << endl;
    cout << "3. 1.75x" << endl;
    cout << "4. 2.0x" << endl;
    cout << "Enter your choice (1-4): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: speed = 1.25; break;
        case 2: speed = 1.5; break;
        case 3: speed = 1.75; break;
        case 4: speed = 2.0; break;
        default:
            cout << "Invalid choice. Using normal speed (1.0x)." << endl;
            speed = 1.0;
    }

    double newTime = totalMinutes / speed;
    int newHours = static_cast<int>(newTime) / 60;
    int newMinutes = static_cast<int>(newTime) % 60;

    cout << fixed << setprecision(2);
    cout << "\nAt " << speed << "x speed, the video will finish in "
         << newHours << " hours and " << newMinutes << " minutes." << endl;

    return 0;
}
