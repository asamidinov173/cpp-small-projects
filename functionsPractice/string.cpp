// string.cpp
// Alikhan Samidinov
// Practice with string and fstream 
#include <string>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("hello.txt");
    outFile << "Hello, world!" << endl;
    outFile.close();

    // Reading from a file
    ifstream inFile("hello.txt");
    string line;
    while (getline(inFile, line)) {
        // process line
    }
    inFile.close();
}