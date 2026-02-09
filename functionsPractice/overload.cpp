// overload.cpp
// Alikhan Samidinov
//  
#include<iostream>
using namespace std;

// prototypes
int sum(int, int);
float sum(float, float);
double sum(double, double);

// implement functions 
int sum(int x, int y)
{
	return x+y;
}

float sum(float x, float y)
{
	return x+y;
}
double sum(double x, double y)
{
	return x+y;
}

int main()
{
	// declaration
	int xi = 6, yi = 9;
	float xf = 3.2, yf = 5.78;
	double xd = 1.667, yd = 8.2;
	
	// display, pass(value), display
	cout << xi << " + " << yi << " = " << sum(xi,yi) << endl;
	cout << xf << " + " << yf << " = " << sum(xf,yf) << endl;
	cout << xd << " + " << yd << " = " << sum(xd,yd) << endl;
	
	return 0;
}
