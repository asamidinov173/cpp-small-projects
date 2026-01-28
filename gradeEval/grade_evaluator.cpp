//gradeeval.cpp
//Alikhan Samidinov
//program that evaluates grades

#include<iostream>
using namespace std;

int main() {
	int score;
	
	cout << "Enter your score: ";
	cin >> score;
	
	if(score >= 97 && score <= 100) {
		cout << "Your grade is A+" << endl;
	}
	else if(score >= 95 && score <= 96) {
		cout << "Your grade is A" << endl;
	}
	else if(score >= 91 && score <= 94) {
		cout << "Your grade is A-" << endl;
	}
	else if(score >= 87 && score <= 90) {
		cout << "Your grade is B+" << endl;
	}
	else if(score >= 84 && score <= 86) {
		cout << "Your grade is B" << endl;
	}
	else if(score >= 80 && score <= 83) {
		cout << "Your grade is B-" << endl;
	}
	else if(score >= 77 && score <= 79) {
		cout << "Your grade is C+" << endl;
	}
	else if(score >= 74 && score <= 76) {
		cout << "Your grade is C" << endl;
	}
	else if(score >= 70 && score <= 73) {
		cout << "Your grade is C-" << endl;
	}
	else if(score >= 67 && score <= 69) {
		cout << "Your grade is D+" << endl;
	}
	else if(score >= 64 && score <= 66) {
		cout << "Your grade is D" << endl;
	}
	else if(score >= 60 && score <= 63) {
		cout << "Your grade is D-" << endl;
	}
	else if(score <= 59 && score >= 0) {
		cout << "Your grade is F " << endl;
	}
	else {
		cout << "Invalid Score!" << endl;
	}
	
	return 0;
}
