// sgt.cpp
// Alikhan Samidinov
// Student Grade Tracker
// Stores student names and scores in arrays,
// calculates the average, and prints a grade report.
#include <iostream>
#include <string>
using namespace std;

float calcAverage(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += scores[i];
    return (float)sum / size;
}

string getGrade(int score) {
    if (score >= 90) return "A";
    else if (score >= 80) return "B";
    else if (score >= 70) return "C";
    else if (score >= 60) return "D";
    else return "F";
}

void printReport(string names[], int scores[], int size) {
    cout << "--- Grade Report ---" << endl;
    for (int i = 0; i < size; i++)
        cout << names[i] << ": " << scores[i] << " (" << getGrade(scores[i]) << ")" << endl;
    cout << "Class Average: " << calcAverage(scores, size) << endl;
}


int main() {
    int size;
    cout << "How many students? ";
    cin >> size;

    string names[100];
    int scores[100];

    for (int i = 0; i < size; i++) {
        cout << "Enter name for student " << i+1 << ": ";
        cin >> names[i];
        cout << "Enter score for " << names[i] << ": ";
        cin >> scores[i];
    }

    printReport(names, scores, size);
    return 0;
}


