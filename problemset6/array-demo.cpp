#include <iostream>
using namespace std;

int main() {
	
    // --- 1. Fixed-size array with manual assignment ---
    int arr1[5]; // create an array of size 5
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    arr1[4] = 50;

    cout << "Array 1 (manual assignment): ";
    
	for (int i = 0; i < 5; i++) {
        
		cout << arr1[i] << " ";
    }
    
	cout << endl;

    // --- 2. Array initialized at declaration ---
    int arr2[5] = {5, 15, 25, 35, 45};
    
	cout << "Array 2 (initialized at declaration): ";
    
	for (int i = 0; i < 5; i++) {
        
		cout << arr2[i] << " ";
    }
    
	cout << endl;

    // --- 3. Array created and filled with user input ---
    int n;
    
	cout << "Enter the size of Array 3: ";
    cin >> n;
    
	int arr3[n]; // variable-length array (VLA, works in most C++ compilers)
    
	for (int i = 0; i < n; i++) {
        
		cout << "Enter value for index " << i << ": ";
        cin >> arr3[i];
    }

    cout << "Array 3 (user input): ";
    
	for (int i = 0; i < n; i++) {
        
		cout << arr3[i] << " ";
    }
	
    cout << endl;

    return 0;
}