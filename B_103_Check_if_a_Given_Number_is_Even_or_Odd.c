/*
Input a number from the user.

Print "EVEN" if the number is even, otherwise print "ODD".

A number is even if it is completely divisible by 2.

Sample Input 0

8
Sample Output 0

EVEN
*/


#include <stdio.h>

int main()
{
	int var1;
	scanf("%d", &var1);
	if (var1%2 == 0)//Replace the '_' with appropriate conditions and statements
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
	return 0;
}