/*
An array is nothing but a contiguous block of memory. So while alloting memory to a pointer, if instead of allocating memory equal to one value, we allocate memory that can hold many values, then the pointer can be used as an array.

For example : to get an array of size 10 :

int *arr = (int*) malloc(sizeof(int) * 10); //we allocate memory equal to 10 integers.
arr can now be used as a normal array (using arr[0], arr[1] and so on)

It can also be used as a pointer, *(arr) equals arr[0], *(arr + 1) equals arr[1] and so on.

The code below takes as input an array of size N and prints the sum of its elements.

Your task is simple, allocate appropriate memory to the pointer array.

Sample Input 0

5
3 9 1 2 4
Sample Output 0

19
*/





#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
	int i, N, sum = 0;
	scanf("%d", &N);
	int *arr = (int*) malloc(sizeof(int)*N); //allocate memory to a new int pointer
	for (i = 0; i < N; i++) scanf("%d", (arr + i));//can also write &arr[i];
	for (i = 0; i < N; i++) sum += *(arr + i); //can also write arr[i];
	printf("%d", sum);
	return 0;
}