/*
An array is one of the most useful data structures provided by C. It is a collection of data that holds a fixed number of values of same type.

Declaration :

<data_type> <array_name>[size].
For example :

int arr[10] 
will create an array of name arr that holds 10 integers

char chars[25]
will create an array of name chars that holds 25 characters

The data in an array is 0-indexed, i.e. the first element is arr[0], second element is arr[1] and so on.

You can access the ith element by using arr[i - 1], hence the last index is N - 1 where N is size.

For this task, complete the code to input an array of 5 numbers and print it.

Sample Input 0

5 6 1 2 7
Sample Output 0

5 6 1 2 7
*/




#include<stdio.h>
int main()
{
	int i, arr[5]; //creates array arr of size 5
	for (i = 0; i < 5; i++) // loop from i = 0 to i = 4
	{
		scanf("%d",&arr[i]);//replace _ by arr[i] to take input for ith element
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);//replace _ to print the ith element.
	}
	return 0;
}