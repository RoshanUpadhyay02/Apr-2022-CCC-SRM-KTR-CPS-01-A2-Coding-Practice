/*
You are given one number N. You must write a program to test whether the given number is prime or not. NOTE : A prime number is such a number that has only two factors : i.e. 1 and itself. 1 is not a prime number.

Input Format

First line contains one number, N.

Constraints

1 <= N <= 10^5

Output Format

Output "yes" if N is a prime number and "no" otherwise. (without the quotes)

Sample Input 0

5
Sample Output 0

yes
Sample Input 1

12
Sample Output 1

no
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number, is_prime,i;
    scanf("%d", &number);
    int count=0;
    for(i=2;i<=number/2;i++)
    {
        if(number%i == 0)
        {
            is_prime = 1;
            count++;
        }        
    }
    if(count == 0)
    {
        is_prime = 1;
    }
    else
    {
        is_prime = 0;
    }
    if (number <= 1)
    {
        is_prime = 0;
    }
    
    if (is_prime == 1) printf("yes");
    if (is_prime == 0) printf("no");
    return 0;
}
