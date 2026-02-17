// manipulator.cpp
// Alikhan Samidinov
// Better understanding manipulators
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double price = 3.45678;
	
	// setprecision(2) means 2 numbers ex: 2.3
	// fixed means digits after decimal ex: 2.34
	cout << fixed << setprecision(2) << price; 
	
	return 0;
}