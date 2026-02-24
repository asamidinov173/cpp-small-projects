// mixcode_practice.cpp
// Alikhan Samidinov
// Full combined code (function, prototypes, cmath, iomanip)
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


// prototypes
double circleArea(double r); 

// function
double circleArea(double r) {
	return 3.14159 * pow(r,2);
}

int main () {
	// declaration
	double radius = 5;
	
	double area = circleArea(radius);
	
	//i/o
	cout << fixed << setprecision(2);
	cout << "Area = " << area;
	
}