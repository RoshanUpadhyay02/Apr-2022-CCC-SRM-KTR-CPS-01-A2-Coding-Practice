/*
Find the XOR of two numbers and print it.

Hint : Input the numbers as strings.

Input Format

First line contains first number X and second line contains second number Y.
The numbers will be given to you in binary form.

Constraints

0 <= X <= 2^1000
0 <= Y <= 2^1000

Output Format

Output one number in binary format, the XOR of two numbers.

Sample Input 0

11011
10101
Sample Output 0

01110
*/











#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[10000], b[10000], tmp[10000];
    scanf("%s",a);
    scanf("%s",b);
    
    if(strlen(a) < strlen(b))
    {
        int diff = strlen(b) - strlen(a);
        strcpy(tmp,a);
        strcpy(a, "0");
        for(int i=0;i<diff-1;i++)
        {
            strcat(a, "0");
        }
        strcat(a, tmp);
        for(int i=0;i<strlen(b);i++)
        {
            if(a[i] == b[i])
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        
    }
    else if(strlen(b) < strlen(a))
    {
        int diff = strlen(a) - strlen(b);
        strcpy(tmp,b);
        strcpy(b, "0");
        for(int i=0;i<diff-1;i++)
        {
            strcat(b, "0");
        }
        strcat(b, tmp);
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i] == b[i])
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        
    }
    else
    {
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i] == b[i])
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
    }
    
    return 0;
}