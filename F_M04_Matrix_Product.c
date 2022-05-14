/*
Write a program that takes as input two matrices and prints their product. If it is not possible to multiply the two matrices simply print -1.

Each matrix as input is of the form :

followed by number of lines with no. of elements on each line

More info on matrix multiplication : https://en.wikipedia.org/wiki/Matrix_multiplication

Hint : you will need three nested for loops to achieve the goal

Sample Input 0

2 2
1 0
0 1
2 2
1 1
1 1
Sample Output 0

1 1
1 1
*/




#include<stdio.h>
int main()
{
    //your code here
    int row,col,row1,col1,i,j,k;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&row1,&col1);
    int b[row1][col1];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(col == row1)
    {
        int sum[row][col1];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col1;j++)
            {
                sum[i][j] = 0;
                for(k=0;k<col;k++)
                {
                    sum[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}