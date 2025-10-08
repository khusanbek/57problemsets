#include <iostream>
using namespace std;

int main() {
	
    int input;
    cout << "Enter number of rows: ";
    cin >> input;

    int i = 1;
    while (i <= input) {
		
        int j = 1;
        
		while (j <= i) {
            
			cout << "*";
            j++;
        }
        
		cout << endl;
        
		i++;
    }

    return 0;
}
