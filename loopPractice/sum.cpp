// sum.cpp
// Alikhan Samidinov
// Add numbers together
#include<iostream>
using namespace std;

int main()
{
	// declarations
	double val, total = 0.0;
	
	// read values 
	do
	{
		cout << "Enter value or 0 to quit: ";
		cin >> val;
		total += val;	
	} while(val != 0);
	
	// display
	cout << "The total is: " << total;
	
	return 0;
}