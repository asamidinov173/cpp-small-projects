// running_total.cpp
// Alikhan Samidinov
// Keep a running total
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	//declaration
	int days;
	double val = 0.0, total = 0.0;
	
	//i/o
	do{
		total += val;
		cout << "Enter sales data or -1 to quit: $";
		cin >> val;
	} while(val >= 0);
	
	//output
	cout << "You sold $" << setprecision(2) << fixed << total;
	
	return 0;
}