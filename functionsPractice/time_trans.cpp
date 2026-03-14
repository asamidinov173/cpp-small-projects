// time_trans.cpp
// Alikhan Samidinov
// Seconds to Hours/Minutes
// User enters seconds and gets hours, minutes, and seconds
#include <iostream>
using namespace std;

void convert(int total, int &h, int &m, int &s) {
    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;
}

int main() {
    int total, h, m, s;
    
    cout << "Enter seconds: ";
    cin >> total;

    convert(total, h, m, s);
    cout << h << "h " << m << "m " << s << "s" << endl;
    
    return 0;
}


