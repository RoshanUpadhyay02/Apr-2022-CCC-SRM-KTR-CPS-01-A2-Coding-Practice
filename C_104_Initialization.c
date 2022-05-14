/*
When we declare a variable and forget to initialise it with some value, the variable will hold unexpected garbage values. Same thing happens to arrays. For arrays whose size is declared with a variable name, a for loop has to be used to initialise all the values manually.

For arrays whose size is defined by a constant, they can be initialised directly as :

arr[10] = {initial_value}. for example : int arr[25] = {0} will initialise all the values of arr to 0.

To complete this task, write a program that takes as input an array of size 10 and prints only elements whose index is odd. ie. arr[1], arr[3], arr[5] and so on.

Sample Input 0

1 5 4 6 12 67 2 4 10 9
Sample Output 0

5 6 67 4 9
*/



#include<stdio.h>
int main()
{
	int i, a[10] = {0}; //direct initialisation
	for (i = 0; i < 10; i++) scanf("%d", &a[i]);
	//print the odd indexed elements of the array here
    for(i=1;i<10;i+=2)
    {
        printf("%d ",a[i]);
    }

	return 0;
}