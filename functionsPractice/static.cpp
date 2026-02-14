// static.cpp
// Alikhan Samidinov
// test passing by value 
#include<iostream>
using namespace std;

// prototypes
void countdown(int);

// implement functions 
void countdown(int start)
{
	// declaration
	static int count = start;
	
	// display update
	cout << count-- << endl;
	
}

int main()
{
	// declaration
	int num = 10;
	
	// display, pass(value), display
	cout << "Inside main(), the number is " << num << endl;
	
	for(int i = 1; i <= num; i++)
		countdown(num);
	
	return 0;
}









