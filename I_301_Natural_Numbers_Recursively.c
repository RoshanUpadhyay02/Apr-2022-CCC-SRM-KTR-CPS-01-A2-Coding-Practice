/*
Print the first N natural numbers using recursion.

Input Format

One number, N.

Constraints

1 <= N <= 1000

Output Format

The first N natural numbers separated by a space. They must be printed using a recursive function only.

Sample Input 0

3
Sample Output 0

1 2 3
*/







#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void num(int n)
{
    if(n)
    {
        num(n-1);
        printf("%d ",n);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}

