/*
One day a teacher gave an assignment to the student to find the factors of a number. The student is not intrested to do the given task and he was searching for the shortcuts. So, please help him by writing a program

Input Format

First line contains an integer T denoting the no.of testcases.

The next T lines contains integers whose factors we have to determine

Constraints

1<=T<=10000

1<=N<=1000000

Output Format

Factors of number seperated by a space in the new line

Sample Input 0

2
4
5
Sample Output 0

1 2 4
1 5
*/





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &number);
        for(i=1;i<=number/2;i++)
        {
            if(number%i == 0)
            {
                printf("%d ",i);
            }        
        }
        printf("%d\n",number);
        
    }
    return 0;
}
