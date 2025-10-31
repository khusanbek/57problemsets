#include <iostream>
#include <iomanip>
using namespace std;

void youtubeLengthSpeed(int hr, int min, double spd) {
	
	double totalMinutes = hr * 60 + min;
	
	double newTime = totalMinutes / spd;
    int nwHr = static_cast<int>(newTime) / 60;
    int nwMin = static_cast<int>(newTime) % 60;

    cout << fixed << setprecision(2);
    cout << "\nAt " << spd << "x speed, the video " << hr 
		 << " hour(s) and " << min << " minutes\n"
		 << "video will finish in " << nwHr << " hours and " << nwMin << " minutes." << endl;
}

double setVideoSpeed() {
	
	double setSpeed;
	
	cout << "\nChoose playback speed:" << endl;
    cout << "1. 1.25x" << endl;
    cout << "2. 1.5x" << endl;
    cout << "3. 1.75x" << endl;
    cout << "4. 2.0x" << endl;
    cout << "Enter your choice (1-4): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: setSpeed = 1.25; break;
        case 2: setSpeed = 1.5; break;
        case 3: setSpeed = 1.75; break;
        case 4: setSpeed = 2.0; break;
        default:
            cout << "Invalid choice. Using normal speed (1.0x)." << endl;
            setSpeed = 1.0;
    }
	
	return setSpeed;
}

int main() {
	
    int hours, minutes;
    double speed = 1.0;

    cout << "Enter video length:" << endl;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
	
	speed = setVideoSpeed();
	
	youtubeLengthSpeed(hours, minutes, speed);

    return 0;
}
