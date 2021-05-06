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
    // cout << letters[2] << letters[0] << letters[1] << endl; // result: cab
    
    string morses[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "   "};
    // cout << morses[3] << " / " << morses[0] << " / " << morses[1] << endl; // result: dab

    // test to make sure that the letters and morse alphabet is correct
    int len = sizeof(letters)/sizeof(letters[0]);
    
    for(int i = 0; i < len; i++) { // test letters
        cout << letters[i] << " ";
    }
    cout << endl;

        for(int i = 0; i < len; i++) { // test morse
        cout << morses[i] << " ";
    }
    cout << endl;
}