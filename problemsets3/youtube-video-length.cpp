#include <iostream>
using namespace std;

int main() {
    double originalTime, speed, newTime;

    cout << "Enter video length in minutes: ";
    cin >> originalTime;

    cout << "Enter playback speed (e.g. 1.25, 1.5, 2): ";
    cin >> speed;

    if (speed <= 0) {
        cout << "Speed must be greater than 0!" << endl;
        return 1;
    }

    newTime = originalTime / speed;

    cout << "At " << speed << "x speed, the video will finish in "
         << newTime << " minutes." << endl;

    return 0;
}
