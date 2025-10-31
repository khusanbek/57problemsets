#include <iostream>
using namespace std;

void youtubeVideoLength(double origTm, double spd) {
	
	double newTime = origTm / spd;
	
	cout << "At " << spd << "x speed, the video will finish in "
         << newTime << " minutes." << endl;
}

int main() {
	
    double originalTime, speed;

    cout << "Enter video length in minutes: ";
    cin >> originalTime;

    cout << "Enter playback speed (e.g. 1.25, 1.5, 2): ";
    cin >> speed;

    if (speed <= 0) {
        cout << "Speed must be greater than 0!" << endl;
        return 1;
    }

    youtubeVideoLength(originalTime, speed);

    return 0;
}
