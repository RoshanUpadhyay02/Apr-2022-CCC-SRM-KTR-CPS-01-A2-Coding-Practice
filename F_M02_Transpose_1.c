/*
Write a program that accepts an NxN matrix as input and prints its transpose.

Details about transpose : https://en.wikipedia.org/wiki/Transpose

Note that you also have to take as input N, the size of the matrix.

Hint : Every element a[i][j] in old matrix becomes a[j][i] in transpose matrix Base Code :

Sample Input 0

3
1 2 3
4 5 6
7 8 9
Sample Output 0

1 4 7
2 5 8
3 6 9
*/




#include<stdio.h>
int main()
{
	int i, j,  N;
	scanf("%d", &N);
	int matrix[N][N], transpose[N][N];
	//your code here
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

	return 0;
}