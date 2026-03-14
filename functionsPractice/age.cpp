// age.cpp
// Alikhan Samidinov
// Age Category 
// User enters their age and gets their life stage
#include <iostream>
using namespace std;

string getCategory(int age) {
    if (age < 3)        return "Baby";
    else if (age < 13)  return "Child";
    else if (age < 18)  return "Teenager";
    else if (age < 65)  return "Adult";
    else                return "Senior";
}

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Category: " << getCategory(age) << endl;
    
    return 0;
}



