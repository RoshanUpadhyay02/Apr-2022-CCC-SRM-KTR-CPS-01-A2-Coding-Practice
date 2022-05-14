/*
Your task is simple. Given a number N, print all of its factors.

Input Format

Only one number, N.

Constraints

1 <= N <= 10^6

Output Format

Output all the factors of the number N separated by a space on one line.

Sample Input 0

6
Sample Output 0

1 2 3 6
*/





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int number,i;
    scanf("%d", &number);
    for(i=1;i<=number/2;i++)
    {
        if(number%i == 0)
        {
            printf("%d ",i);
        }        
    }
    printf("%d",number);
    return 0;
}
