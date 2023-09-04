// Task
// Given an integer, , perform the following conditional actions:
// If  is odd, print Weird
// If  is even and in the inclusive range of  to , print Not Weird
// If  is even and in the inclusive range of  to , print Weird
// If  is even and greater than , print Not Weird
// Complete the stub code provided in your editor to print whether or not  is weird.

// Input Format
// A single line containing a positive integer, .

// Output Format
// Print Weird if the number is weird; otherwise, print Not Weird.

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    if(n%2 == 0){
        if(n>=2 && n<=5){
            cout << "Not Weird" << endl;
        }
        if(n>=6 && n<=20){
            cout << "Weird" << endl;
        }
        if(n>20){
            cout << "Not Weird" << endl;
        }
    }
    else{
        cout << "Weird" << endl;
    }
    
}
