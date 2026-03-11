// count.cpp
// Alikhan Samidinov
// Countdown (do) loop
// Counts down from a number the user enters
// Note: "do" here refers to a basic do-once execution block
#include <iostream>
using namespace std;

void countdown(int n) {
    do {
        cout << n << "..." << endl;
        n--;
    } while (n > 0);
    cout << "Go!" << endl;
}

int main() {
    int n;
    cout << "Enter countdown start: ";
    cin >> n;
    
    countdown(n);
    
    return 0;
}



