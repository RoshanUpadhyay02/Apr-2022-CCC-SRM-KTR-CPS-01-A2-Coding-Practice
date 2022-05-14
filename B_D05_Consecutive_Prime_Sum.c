/*
Some prime numbers can be expressed as Sum of other consecutive prime numbers.

For example

5 = 2 + 3
17 = 2 + 3 + 5 + 7
41 = 2 + 3 + 5 + 7 + 11 + 13

Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

Input Format:
Each test case contains a number N <= 1000000000

Output Format:
Print the total number of all such prime numbers which are less than or equal to N.
*/







#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isprime(long long int n)
{
    for(long long int i=2;i<=pow(n,0.5);i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n,i,c=0,v=0;
    scanf("%lld",&n);
    
    for(i=0;i<=n+1;i++)
    {
        if(i>1)
        {
            if(isprime(i))
            {
                c += i;
                if(isprime(c) && c < n)
                    v +=1;
                else if(c > n)
                    break;
            }
        }
    }
    printf("%lld",v-1);
    return 0;
}