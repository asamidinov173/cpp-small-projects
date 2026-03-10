// fahrenheit.cpp
// Alikhan Samidinov
// Temperature Converter
// Celsius to Fahrenheit
#include <iostream>
using namespace std;

float toFahrenheit(float c) {
    return (c * 9/5) + 32;
}

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << celsius << "C = " << toFahrenheit(celsius) << "F" << endl;
    
    return 0;
}