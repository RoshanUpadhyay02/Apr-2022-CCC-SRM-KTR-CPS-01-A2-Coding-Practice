/*
Write a program that accepts a number N as input and prints the following pattern :

*
**
***
**** 
until N lines.

Sample Input 0

5
Sample Output 0

*
**
***
****
*****
*/



#include <stdio.h>

int main()
{
	//Your code here
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
	return 0;
}