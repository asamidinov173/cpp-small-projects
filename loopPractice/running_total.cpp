// running_total.cpp
// Alikhan Samidinov
// Keep a running total
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	//declaration
	int days;
	double val, total = 0.0;
	
	//i/o
//	cout << "How many days do you have data for? " ;
//	cin >> days;
//	
//	while(days > 0) {
//		cout << "Enter data: $";
//		cin >> val;
//		total += val;
//		days--;
//	}

	do {
		cout << "How many days do you have data for? ";
		cin >> days;
	} while (val <= 0);
	
	//output
	cout << "You sold $" << setprecision(2) << fixed << total;
	
	return 0;
}