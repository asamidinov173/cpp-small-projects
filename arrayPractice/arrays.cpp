// arrays.cpp
// Alikhan Samidinov
// Explore arrays
#include<iostream>
using namespace std;

// global CONSTANT for array size
const int DIM = 6;

// prototypes
void pop_array(double []);
double sum_array(double []);
void display_sum(double);
void display_array(double[]);

// implementations
void pop_array(double revenue[]) 
{
	// prompt user for revenue data
	for(int i = 0; i < DIM; i++)
	{
		cout << "Enter revenue data for month #" << i+1 << ": ";
		cin >> revenue[i];
	}
}

double sum_array(double revenue[])
{
	// declaration
	double total = 0.0;
	
	// keep running total
	for(int i = 0; i < DIM; i++)
	{
		total += revenue[i];
	}
	
	return total;
}

void display_sum(double sum)
{
	// display
	cout << "The total is: " << sum; 
}

void display_array(double revenue[])
{
	// display contents of the array 
	for(int i = 0; i < DIM; i++)
	{
		cout << revenue[i] << "\t";
	}
	cout << endl;
}

int main() 
{
	// declarations
	double revenue[DIM] = {0}, sum;
	
	// look at array contents
	display_array(revenue);
	
	// populate
	pop_array(revenue);
	
	// look at array contents
	display_array(revenue);
	
	// populate
	sum = sum_array(revenue);
	display_sum(sum);
	
	return 0;
}













