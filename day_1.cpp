// Task
// Complete the code in the editor below. The variables , , and  are already declared and initialized for you. You must:
// Declare  variables: one of type int, one of type double, and one of type String.
// Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  variables.
// Use the  operator to perform the following operations:
// Print the sum of  plus your int variable on a new line.
// Print the sum of  plus your double variable to a scale of one decimal place on a new line.
// Concatenate  with the string you read as input and print the result on a new line.

// Input Format
// The first line contains an integer that you must sum with .
// The second line contains a double that you must sum with .
// The third line contains a string that you must concatenate with .

// Output Format
// Print the sum of both integers on the first line, the sum of both doubles (scaled to  decimal place) on the second line, and then the two concatenated strings on the third line.

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i1;
    double d1;
    string s1;
    string tmp;
    
    getline(cin, tmp);
    i1 = stoi(tmp);
    
    getline(cin, tmp);
    d1 = stod(tmp);
    getline(cin, s1);
    
    printf("%i\n" , i + i1);
    printf("%.1f\n" , d + d1);
    
    cout << s + s1 << endl;
    
    return 0;
}
