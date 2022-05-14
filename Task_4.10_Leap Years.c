/*
Write a function that given an array of some size, with its elements being years, returns an array of strings of either "yes" or "no" where the ith string is "yes" if the ith year is a leap year and "no" otherwise.

Note that you can assume every year that is divisible by 4 is a leap year.

Sample Input 0

5
1400
1979
1996
2016
2017
Sample Output 0

yes
no
yes
yes
no
*/




#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    char *ans[i];
    for(i=0;i<N;i++)
    {
        if(arr[i]%4 == 0)
        {
            ans[i] = "yes";
        }
        else
        {
            ans[i] = "no";
        }
    }
    for (i = 0; i < N; i++) puts(ans[i]);
    return 0;
}