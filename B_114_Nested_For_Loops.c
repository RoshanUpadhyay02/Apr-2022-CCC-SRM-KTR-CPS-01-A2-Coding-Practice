/*
It is possible in C to write one for loop inside another. This is known as nested for loop. For example :

for (i = 0; i < n; i++)
{
	for (j = 0; j < n; j++)
	{
		//block of statements.
	}
}
To complete this task write a program that takes a number N as input and prints a square block of asterisks '*' of size NxN.

Sample Input 0

2
Sample Output 0

**
**
*/



#include <stdio.h>

int main()
{
	int i, j, n;
	scanf("%d", &n);
	//Replace the _ with appropriate code to get the desired output.
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("*");
		}
        printf("\n");
	}
}