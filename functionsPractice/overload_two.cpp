// .cpp
// Alikhan Samidinov
//  
#include<iostream>
using namespace std;

// prototypes
int sum(int, int);
int sum(int, int, int);

// implement functions 
int sum(int x, int y, int z)
{
	return x+y+z;
}

int main(){
	// declaration
	int xi = 6, yi = 9, zi = 2;
	
	// compute and display sums
	cout << xi << " + " << yi << " = " << sum(xi, yi) << endl;
	cout << xi << " + " << yi << " + " << zi << " = " << sum(xi, yi, zi) << endl;
	
	return 0;
}
