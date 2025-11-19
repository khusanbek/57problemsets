#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
	
    srand(time(0)); // seed random number
    int secretNumber = rand() % 1000 + 1; // random number 1 to 1000
    
	int guess;
    int attempts = 0;

    cout << "Guess the number between 1 and 1000!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        
		attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try a higher number.\n";
        } 
		else if (guess > secretNumber) {
            cout << "Too high! Try a lower number.\n";
        } 
		else { // if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } 
	while (guess != secretNumber);

    return 0;
}
