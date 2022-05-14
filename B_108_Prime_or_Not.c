/*
Write a program that takes one number as an input and prints "yes" if that number is prime and "no" otherwise.

Sample Input 0

37
Sample Output 0

yes
Sample Input 1

22
Sample Output 1

no
*/


#include <stdio.h>

int main()
{
    int number, is_prime,i;
    scanf("%d", &number);
    //your code here
    //hint : loop through all the numbers less than number and see if any of them divides it
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

