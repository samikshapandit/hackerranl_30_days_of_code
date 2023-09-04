// Task
// Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.

// Input Format
// The first line contains an integer,  (the size of our array).
// The second line contains  space-separated integers that describe array 's elements.

// Output Format
// print the elements of array  in reverse order as a single line of space-separated numbers.

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[10000];
    
    for(int i=0; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
}
