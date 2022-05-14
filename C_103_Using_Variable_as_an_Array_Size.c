/*
So far we used a constant to declare the size of the array : arr[10] or arr[5].

We can also use a variable instead : arr[N], or arr[size] etc.

We just need to make sure our variable holds an appropriate value before we it to declare the array.

Write a program to input a number N, the size of the array.

And then to input N integers, the elements of the array and print them in reverse order.

Sample Input 0

6
1 2 3 4 5 6
Sample Output 0

6 5 4 3 2 1
*/




#include<stdio.h>
int main()
{
	int i, N; 
	scanf("%d", &N); //acquiring the value of N, the size of array
	int arr[N]; //declaring an array of size N.
	//input the elements of the array here and then print them in reverse
	for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

	return 0;
}