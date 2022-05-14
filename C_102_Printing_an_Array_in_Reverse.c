/*
Write a program that takes as input an array of size 5 and prints it in reverse.

Hint : Instead of running a loop from i = 0 to i = 4, you can run it from i = 4 to i = 0 using the decrement operator.

Sample Input 0

8 6 4 2 0
Sample Output 0

0 2 4 6 8
*/



#include<stdio.h>
int main()
{
	int i, arr[5];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	//write the code here to print array in reverse
    for(i=5-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }


	return 0;
}