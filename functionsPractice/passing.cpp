// passing.cpp
// Alikhan Samidinov
// test passing by value versus reference
#include<iostream>
using namespace std;

// prototypes
void update_value(int);
void update_ref(int &);

// implement functions 
void update_value(int x)
{
	// calculate new value
	x += 5;
	
	// print message
	cout << "Inside update_value(), the number is " << x << endl;
}

void update_ref(int &x)
{
	// calculate new value
	x += 5;
	
	// print message
	cout << "Inside update_value(), the number is " << x << endl;
}

int main()
{
	// declaration
	int num = 4;
	
	// display, pass(value), display, pass(reference), display
	cout << "Inside main(), the number is " << num << endl;
	update_value(num);
	cout << x << endl;
	cout << "Back in main(), the number is " << num << endl;
	update_ref(num);
	cout << "Back in main(), the number is " << num << endl;
	
	return 0;
}





















