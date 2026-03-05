// finalprep.cpp
// Alikhan Samidinov
// Preparation to Final Exam, better understanding Intro C++
#include<iostream>
using namespace std;

// Prototypes
double getAverage(int arr[], int size);
int getHighest(int arr[], int size);
int getLowest(int arr[], int size);
char letterGrade(int score);
void printReport(int arr[], int size);

// Funstions 
double getAverage(int arr[], int size) 
{
	int sum = 0;
	for(int i = 0; i < size; i++)
		sum += arr[i];
	return(double)sum / size;
}

int getHighest(int arr[], int size)
{
	int high = arr[0];
	for(int i = 1; i < size; i++)
		if(arr[i] > high) 
			high = arr[i];
	return high;
}

int getLowest(int arr[], int size)
{
	int low = arr[0];
	for(int i = 1; i < size; i++)
		if(arr[i] < low) 
			low = arr[i];
	return low;
}

char letterGrade(int score)
{
	if(score >= 90) return 'A';
	else if(score >= 80) return 'B';
	else if(score >= 70) return 'C';
	else if(score >= 60) return 'D';
	else return 'F';
}

void printReport(int arr[], int size)
{
	cout << "Student	Score	Grade\n";
	for(int i = 0; i < size; i++) {
		cout << i + 1 << "	" << arr[i] << "	" << letterGrade(arr[i]) << endl;
	}
}

// Main Function
int main() {
	// declarations
	int n;
	int scores[30];
	
	//i/o
	do {
		cout << "Enter number of students (1-30): ";
		cin >> n;
	} while(n < 1 || n > 30);
	
	for(int i = 0; i < n; i++) {
		int s;
		
		do {
			cout << "Enter score #" << i + 1 << ": ";
			cin >> s;
			if(s < 0 || s > 100) 
				cout << "Invalid. Enter again.\n";
		} while(s < 0 || s > 100);
		
		scores[i] = s;
	}
	
	cout << "\n===== REPORT =====\n";
	printReport(scores, n);
	
	double avg = getAverage(scores, n);
	int high = getHighest(scores, n);
	int low = getLowest(scores, n);
	
	// count failures
	int failed = 0;
	for (int i = 0; i < n; i++) {
		if(letterGrade(scores[i]) == 'F')
			failed++;
	}
	
	cout << "\nAverage score: " << avg << endl;
	cout << "\nHighest score: " << high << endl;
	cout << "\nLowest score: " << low << endl;
	cout << "Number of students who failed: " << failed << endl;
	
	// extra credit 
	int A = 0, B = 0, C = 0, D = 0, F = 0;
	
	for(int i = 0; i < n; i++) {
		char g = letterGrade(scores[i]);
		
		if(g == 'A') A++;
		else if(g == 'B') B++;
		else if(g == 'C') C++;
		else if(g == 'D') D++;
		else F++;
	}
	
	cout << "\n=====HISTOGRAM=====\n";
	
	cout << "A: ";
	for(int i = 0; i < A; i++) cout << "*";
	cout << endl;
	
	cout << "B: ";
	for(int i = 0; i < B; i++) cout << "*";
	cout << endl;
	
	cout << "C: ";
	for(int i = 0; i < C; i++) cout << "*";
	cout << endl;
	
	cout << "D: ";
	for(int i = 0; i < D; i++) cout << "*";
	cout << endl;
	
	cout << "F: ";
	for(int i = 0; i < F; i++) cout << "*";
	cout << endl;
	
	return 0;
}










