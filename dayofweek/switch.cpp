// switch.cpp
// Alikhan Samidinov 
// Practice with "switch"

#include<iostream>
using namespace std;

int main() {
	//declaration
	int a, b, op;
	
	cout << "1. Addition" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	
	cout << "Please enter a number: " << endl;
	cin >> a;
	
	cout << "Please enter b number: " << endl;
	cin >> b;
	
	cout << "Please enter option: " << endl;
	cin >> op;
	
	switch(op) {
		case 1: 
			cout << a + b;
			break;
		case 2: 
			cout << a - b;
			break;
		case 3: 
			cout << a * b;
			break;
		case 4:
			if (b != 0){
				cout << a / b;
			}
			else {
				cout << "Division by zero";
			}
			break;
		default: 
			cout << "Invalid Operation!";
	}
	
	
	return 0;
}