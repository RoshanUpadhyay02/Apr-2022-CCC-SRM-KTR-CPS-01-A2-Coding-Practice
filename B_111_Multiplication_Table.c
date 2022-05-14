/*
Execution of the loop body once is known as one iteration. So if the loop body executes 10 times, the loop is said to have run 10 iterations.

Write a program to input a number N and print the first 10 multiples of N.

Sample Input 0

6
Sample Output 0

6 12 18 24 30 36 42 48 54 60
*/



#include <stdio.h>

int main()
{
	int i, N;
	scanf("%d", &N);
	//write a loop that runs for 10 iterations
    for(i=1;i<=10;i++)
    {
        printf("%d ",N*i);
    }
	
	return 0;
}