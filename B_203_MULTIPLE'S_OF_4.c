/*
Ram is a boy who is studying in a school. One his teacher gave him the homework. The task given to him is he is given some numbers he has to find wether the given numbers are multiple's of 4 or not.

Input Format

A Single numeric Integer

Constraints

1<=N<=10000

Output Format

Yes if it is a multiple of 4. Else Print no

Sample Input 0

8
Sample Output 0

yes
Explanation 0

8 is a multiple of 4.
*/




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    if(n%4 == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
