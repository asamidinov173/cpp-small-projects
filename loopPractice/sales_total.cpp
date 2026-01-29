// sales_total.cpp
// Alikhan Samidinov
// Keep a running total
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	//declaration
	const int MONTHS = 12;
	double val = 0.0, total = 0.0;
	
	//i/o
	for(int i = 1; i <= MONTHS; i++) {
		cout << "Enter sales for months " << i << ": $" ;
		cin >> val;
		total += val;
	}
	//output
	cout << "Total is: $" << setprecision(2) << fixed << total;
	
	return 0;
}