// coin_flip.cpp
// Alikhan Samidinov
// Coin Flip Simulator
// Simulates flipping a coin N times and counts heads/tails
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n, heads = 0, tails = 0;
    
    cout << "How many times to flip? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (rand() % 2 == 0) heads++;
        else tails++;
    }

    cout << "Heads: " << heads << endl;
    cout << "Tails: " << tails << endl;
    
    return 0;
}


