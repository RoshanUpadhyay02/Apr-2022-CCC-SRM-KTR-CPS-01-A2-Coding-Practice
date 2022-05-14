/*
Implement a function void swap(int*, int*) that takes two pointers and swaps the values located at those memory locatins.

Sample Input 0

7 9
Sample Output 0

9 7
*/

#include<stdio.h>
void swap(int*, int*);
int main()
{
	int v1, v2;
	scanf("%d%d", &v1, &v2);
	swap(&v1, &v2);
	printf("%d %d", v1, v2);
	return 0;
}
//implement the function swap here
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}