// Recursive Method for Calculating Factorial
// if N<=1 then return 1 
//   otherwise return N*factorial(N-1)
  
// Function Description
// Complete the factorial function in the editor below. Be sure to use recursion.
// factorial has the following paramter:
// int n: an integer
// Returns
// int: the factorial of 
// Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of .

// Input Format
// A single integer,  (the argument to pass to factorial).

//Code
#include <bits/stdc++.h>

using namespace std;

int fact_fun(int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n*fact_fun(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    int factorial = fact_fun(n);
    cout << factorial ;
}
