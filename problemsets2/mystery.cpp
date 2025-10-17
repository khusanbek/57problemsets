
#include <iostream>

using namespace std;

int main() {
	
	int y = 0;
	int x = 1;
	int total = 0;

	while ( x <= 4 )
	{
		y = x * x;
		cout << y << " ";
		total += y;
		++x;
	}

	cout << "Total is " << total <<"\n";
}