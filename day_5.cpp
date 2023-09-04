// Task
// Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: n x i = result.

// Input Format
// A single integer, .

// Output Format
// Print  lines of output; each line  (where ) contains the  of  in the form:
// n x i = result.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<=10; i++){
        int res = n * i;
        cout << n << " " << "x" << " " << i << " " << "=" << " " << res << endl; 
    }
}



