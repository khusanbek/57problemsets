#include <iostream>
using namespace std;

int addition(int num1, int num2) {
	
	return num1 + num2;
}

int subtraction(int num1, int num2) {
	
	return num1 - num2;
}

int main() {
    
	int firstNum = 0, secondNum = 0;
    
	cout << "Enter two numbers: ";
    cin >> firstNum >> secondNum;

    cout << "Addition - " << addition(firstNum, secondNum) << endl;
    cout << "Subtraction - " << subtraction(firstNum, secondNum) << endl;
    
	return 0;
}
