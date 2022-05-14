/*
Fibonacci Series is the sequence where every term is the sum of 2 previous terms.
Formally, Fn = Fn-1 + Fn-2
with F0 = 0 and F1 = 1.
Your task is for a given number N print the Nth Fibonacci number. You must use recursion to find the fibonacci number.

Input Format

One number N.

Constraints

0 <= N <= 12

Output Format

One number Fn.

Sample Input 0

0
Sample Output 0

0
*/







#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int N)
{
    //base cases here
    if(N <= 1)
    {
        return N;
    }

    //recursive calls here
    else
    {
        return (fibonacci(N-1) + fibonacci(N-2));
    }

}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d", &N);
    printf("%d", fibonacci(N));
    return 0;
}