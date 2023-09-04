// Task
// Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).
// Note:  is considered to be an even index.

// Input Format
// The first line contains an integer,  (the number of test cases).
// Each line  of the  subsequent lines contain a string, .

// Output Format
// For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int T, i ;
    char s[10000];
    scanf("%d",&T);
    
    for(i=0; i<T; i++){
        scanf("%s", s);
        oddEven(s);
    }
        
    return 0;
}

void oddEven(char s[]){
    for(int i=0; i<strlen(s); i++)
    {
        if(i%2 == 0)
        {
            printf("%c", s[i]);
        }
    } 
        printf(" ");
        
        
        for(int i=0; i<strlen(s); i++)
        {
            if(i%2 != 0)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
}

