#include <iostream>
using namespace std;

int main() {
    
	int input = 0, i = 1;
    
	cout << "Enter number: ";
    cin >> input;
	
	cout << "Print hello (while) " << input << " times.\n";
	
	while (i <= input) {
        
		cout << "Hello\n";
		i++;
    }
	
	cout << "\n";
	
	cout << "Print hello (for) " << input << " times.\n";
	
	for (int j = 1; j <= input; j++) {
        
		cout << "Hello\n";
    }
	
	cout << "\n";
	
	cout << "Enter number (% 10, / 10): ";
    cin >> input;
	
	cout << input << " % 10 = " << input % 10 << "\n";
	cout << input << " / 10 = " << input / 10 << "\n\n";
	
    return 0;
}
