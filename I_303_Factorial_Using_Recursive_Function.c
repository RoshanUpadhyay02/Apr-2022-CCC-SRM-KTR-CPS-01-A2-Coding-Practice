/*
Write a program that returns the value of N! (N factorial) using recursion.
Note that N! =- 1*2*...*N
Also, 0! = 1 and 1! = 1.

Input Format

One number, N.

Constraints

0 <= N <= 15

Output Format

Output the value of N factorial.
*/








#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int factorial(long long int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int n;
    scanf("%lld",&n);
    printf("%lld",factorial(n));
    return 0;
}
