/*
Recursion can be used in many ways provided the correct base condition is used. See the code below for example, it returns the sum of first N natural numbers.

int sum_of_natural_numbers(int N)
{
	if (N <= 1) return N;
	return 1 + sum_of_natural_numbers(N - 1);
}
Convince yourself that the above code works, and then write a program to calculate N! (N factorial) using recursion.

Note :

N! = 1 * 2 * 3 ... * N-1 * N.
0! = 1 and 1! = 1.
Sample Input 0

0
Sample Output 0

1
*/






#include<stdio.h>
long long int factorial(long long int N)
{
	//complete this function
	//base case here
    if(N == 0)
    {
        return 1;
    }

	//recursive call here
    else
    {
        return N*factorial(N-1);
    }
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%lld", factorial(N));
	return 0;
}