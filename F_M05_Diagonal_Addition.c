/*
Find the sum of the diagonals of a NxN square matrix.

Hint : Can be solved using the same logic as problem 1 of zoho practice set.

Input Format

First line contains N, the size of the grid Then N^2 numbers giving the value of the row and column

Constraints

1 <= N <= 10

Output Format

Print the sum

Sample Input 0

3
1 2 3
4 5 6
7 8 9
Sample Output 0

25
*/






#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == j)
            {
                sum += a[i][j];
            }
            if((i+j) == (n-1))
            {
                sum1 += a[i][j];
            }
        }
    }
    if(n%2 != 0)
    {
        printf("%d",sum+sum1-a[n/2][n/2]);
    }
    else
    {
        printf("%d",sum+sum1);
    }
    
    return 0;
}
