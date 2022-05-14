/*
Sometimes you may want to break the loop before it has completed the number of iterations desired in the beginning because the information that you needed has already been gained. the break keyword does that for you.

Usage: break;

The break keyword will break the loop whenever executed. No more statements after the break statement will be executed and the execution resumes at the line after the loop ends.

The code below tries to find a prime number greater than N. But the loop does not have a condition so it never ends. Break it using break; once it has found a prime number.

Sample Input 0

61
Sample Output 0

67
*/



#include <stdio.h>

int is_prime(int num)
{
	if (num < 2) return 0;
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int i, num;
	scanf("%d", &num);
	for (i = num + 1; ; i++)
	{
		if (is_prime(i) == 1)//break the loop once youve found the prime
		{
			printf("%d", i);
		    break;
		}
	}
	return 0;
}

