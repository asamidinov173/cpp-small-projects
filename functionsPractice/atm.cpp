// atm.cpp
// Alikhan Samidinov
// Simulate an ATM machine
#include<iostream>
using namespace std;

// global CONSTANTS
const double INIT_BAL = 1000.00;

// prototypes
double set_init_bal();
char disp_menu();
double deposit(double, double);
double withdraw(double, double);
void disp_balance(double);

// implement functons

// set the initial balance
double set_init_bal()
{
	return INIT_BAL;
}

// display menu and return user choice
char disp_menu()
{
	// declaration
	char choice;
	
	// display
	do
	{
		cout << "A. Make Deposit" << endl;
		cout << "B. Withdraw" << endl;
		cout << "C. Check Balance" << endl;
		cout << "D. Quit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;
	} while(choice != 'a' && choice != A &&
		    choice != 'b' && choice != 'B' &&
			choice != 'c' && choice != 'C' &&
			choice != 'd' && choice != 'D');
	
	return choice;
	
}

// make a deposit
double deposit(double curr_bal, double dep_amt)
{
	curr_bal += dep_amt;
	
	return curr_bal;
}

double withdraw(double curr_bal, double wd_amt)
{
	curr_bal -= wd_amt;
	
	return curr_bal;
}







