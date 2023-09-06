// Task
// Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation. When working with different bases, it is common to show the base as a subscript.

// Input Format
// A single integer, .

// Output Format
// Print a single base- integer that denotes the maximum number of consecutive 's in the binary representation of .

// Code
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    
    while(n!=0)
    {
        n = n & (n<<1);
        count++;
    }
    cout << count;
}
