/*
The fibonacci Series is defined as :

F(N) = F(N - 1) + F(N - 2) with F(0) = 0 and F(1) = 1.
the first few terms of the series are, thus : 0, 1, 1, 2, 3, 5, 8, 13 and so on..

Write a program to print the Nth Fibonacci number using recursion

Sample Input 0

0
Sample Output 0

0
*/








#include<stdio.h>
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
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", fibonacci(N));
	return 0;
}