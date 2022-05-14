/*
Just as 2D matrix, you can declare an array of as many dimensions as you want.

For example : 3D array : int arr3d[5][5][5], 4D array : int arr4d[5][5][5][5] and so on.

For this task, you are to write a program that adds two 3x3 matrices and prints the result

Sample Input 0

1 2 3
4 5 6
7 8 9
3 2 1
6 5 4
9 8 7
Sample Output 0

4 4 4
10 10 10 
16 16 16
*/




#include<stdio.h>
int main()
{
	int mat1[3][3], mat2[3][3], res[3][3], i, j;
	//your code here
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", res[i][j]);
		}printf("\n");
	}
	return 0;
}