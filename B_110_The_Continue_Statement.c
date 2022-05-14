/*
Counter keyword to the break statement is the continue statement, The break statement stops the execution of the loop while the continue statement takes it to the next iteration.

Whenever a continue statement is invoked, no other statements after it will be executed for the iteration and the iteration ends. The execution of the next iteration begins at the beginning of the loop body once again.

For this task, write a program to input one number N, and to print all the natural numbers until N except those that are a multiple of 3.

Sample Input 0

10
Sample Output 0

1 2 4 5 7 8 10
*/



#include <stdio.h>

int main()
{
	int i, N;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		if (i % 3 == 0)//add a continue statement to move on to the next iteration
		{
		   continue;
		}
		printf("%d ", i);
	}
return 0;
}

