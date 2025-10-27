#include <iostream>
#include <cmath>   // for ceil()
#include <iomanip> // for setprecision, fixed

using namespace std;

// Function to calculate parking charges
double calculateCharges(double hoursParked) {
    
	double charge = 2.0; // minimum charge for up to 3 hours

    if (hoursParked > 3.0) {
        charge += ceil(hoursParked - 3.0) * 0.5; // $0.50 per extra hour or part thereof
    }

    if (charge > 10.0) {
        charge = 10.0; // maximum charge for 24 hours
    }

    return charge;
}

int main() {
    
	double totalReceipts = 0.0;
    int customerCount = 0;
    double hours;

    cout << "=== Parking Garage Charge Calculator ===" << endl;
    cout << "Enter hours parked for each customer (0 to stop):" << endl;

    while (true) {
        cout << "Enter hours parked for customer " << (customerCount + 1) << ": ";
        cin >> hours;

        if (!cin) { // input error
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (hours == 0)
            break;

        if (hours < 0 || hours > 24) {
            cout << "Invalid input! Hours must be between 0 and 24." << endl;
            continue;
        }

        double charge = calculateCharges(hours);
        totalReceipts += charge;
        customerCount++;

        cout << fixed << setprecision(2);
        cout << "Charge for customer " << customerCount << ": $" << charge << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total receipts for " << customerCount << " customers: $" << totalReceipts << endl;
    cout << "=========================================" << endl;

    return 0;
}
