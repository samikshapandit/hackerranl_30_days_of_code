// Task
// To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, and finally print the value of your variable on a second line.

// Input Format
// A single line of text denoting  (the variable whose contents must be printed).

// Output Format
// Print Hello, World. on the first line, and the contents of  on the second line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    string input_string; 
    
    getline(cin, input_string); 
    
    cout << "Hello, World." << endl;
    cout << input_string << endl;

    return 0;
}
