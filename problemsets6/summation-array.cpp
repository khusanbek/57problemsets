#include <iostream>
using namespace std;

int main() {
	
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
	
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Using while loop to sum
    int sum = 0, i = 0;
    while (i < n) {
        sum += arr[i];
        i++;
    }

    cout << "The sum of the array numbers is: " << sum << endl;
    return 0;
}
