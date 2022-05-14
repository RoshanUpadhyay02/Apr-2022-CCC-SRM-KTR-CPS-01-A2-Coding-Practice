/*
Given a decimal number N, you need to find the number of bases 1 < b <= n
 such that when the number N is represented in base 'b', it ends in a zero.

Input Format

Input contains only one number, N.

Constraints

1 <= N <= 10000

Output Format

Output one number, the number of bases b such that when number N is represented
 in base b, the number contains a trailing zero.

Sample Input 0

12
Sample Output 0

5
Explanation 0

Base : Number :
2 1100
3 110
4 30
5 22
6 20
7 15
8 14
9 13
10 12
11 11
12 10

12 ends with a zero in 5 different number systems - 2,3,4,6 and 12. Hence the is 5
*/





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,count=0,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
