#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

void setLetters();

int main() {

    cout << "Hello World" << endl;
    setLetters();

    return 0;
}

// set the letters of the alphabet for reference
void setLetters() { 
    string letters[] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", " "};
    cout << letters[2] << letters[0] << letters[1] << endl; // result: cab
    cout << letters[3] << letters[0] << letters[1] << endl; // result: dab
}