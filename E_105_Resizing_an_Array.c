/*
realloc() - extends the memory already allocated to a pointer

Use :

realloc(pointer, new memory size);
For example :

realloc(arr, sizeof(int) * 10);
An array arr of size 3 has already been defined, but you need a bigger array.

Use realloc to increase the size of array arr to contain N elements where N is the input number.

Then input N integers, each denoting an element of the array. Finally, print the array in reverse.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

5 4 3 2 1
*/






#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr = (int*) malloc(sizeof(int) * 3);
	int i, N;
	//input N and then use realloc to change size of array arr.
    scanf("%d",&N);
    realloc(arr,sizeof(int)*N);
    for(i=0;i<N;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",*(arr+i));
    }
    
	return 0;
}