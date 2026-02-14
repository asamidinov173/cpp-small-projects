#include<iostream>
using namespace std;

int main() {
	//declaration
	int val; 
	
	//i/o 
	cout << "Please enter a value greater than 0: "; 
	cin >> val;
	
	//input validation
	while (val <= 0) {
		cout << "Value is <= 0! Please enter a positive: ";
		cin >> val;
	}
	
	//output
	cout << "You entered " << val << endl;
	
	return 0;
	
}