/*
A for loop can do a lot more than just printing the first N numbers. For example :

for (i = 2; i <= 10; i += 2) 
	printf("%d",i); 
will print even numbers.

for (i = 10; i >= 0; i--) 
	printf("%d ", i);
will print the numbers in reverse.

for (i = 1; i <= 10; i++) 
	printf("%d ", x);
will print the value of x ten times and so on.

To complete this task, write a program to input a number N and print all odd numbers that are less than N.

Sample Input 0

15
Sample Output 0

1 3 5 7 9 11 13
*/


#include <stdio.h>

int main()
{
	int i, N;
	//input N and print all odd numbers less than N
	//Hint : start a for loop at i = 1, and increment by 2 i.e. i += 2.
    scanf("%d",&N);
    for(i=1;i<N;i+=2)
    {
        printf("%d ",i);
    }

	return 0;
}