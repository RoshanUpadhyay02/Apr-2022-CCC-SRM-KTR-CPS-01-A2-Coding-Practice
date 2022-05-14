/*
Input a number N, and print the sum of all its digits.

Hint : Use the fact that N % 10 will give the last digit of N while N/10 will eliminate its last digit.

Hint 2: You may need to use a loop

Sample Input 0

874
Sample Output 0

19
Sample Input 1

24567
Sample Output 1

24
*/




#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n != 0)
    {
        int a = n%10;
        sum += a;
        n /= 10;
    }
    printf("%d",sum);

	return 0;
}