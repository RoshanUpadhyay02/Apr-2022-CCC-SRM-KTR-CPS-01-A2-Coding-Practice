/*
We can use relational operators to compare two ints, doubles or even chars, but we cannot compare two strings using relational operators.

For this task write the function strcmp to compare two strings s1 and s2 and return an integer, s1[x] – s2[x] where x is the first point of difference in s1 and s2.

For example, if s1 = “banana” and s2 = “banyan tree”, strcmp(s1,s2) must return ‘a’ – ‘y’ = 24.

Note : the comparison is done based on lexicographic order i.e. dictionary order. Of two strings, the smaller one would be the string that would come first in a dictionary,

Sample Input 0

stupefy
wingardium leviosa
Sample Output 0

-4
*/





#include<stdio.h>
int strcmp(char* s1, char* s2)
{
	int i=0,j=0;
    while(s1[i++]);
    int len1 = i;
    while(s2[j++]);
    int len2 = j;
    if(len1 == len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i] != s2[i])
            {
                return (s1[i]-s2[i]);
                break;
            }
        }
    }
    if(len1 > len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i] != s2[i])
            {
                return (s1[i]-s2[i]);
                break;
            }
        }
    }
    if(len2 > len1)
    {
        for(i=0;i<len2;i++)
        {
            if(s1[i] != s2[i])
            {
                return (s1[i]-s2[i]);
                break;
            }
        }
    }
    return 0;
}
int main()
{
	char str1[50], str2[50];
	gets(str1);
	gets(str2);
	printf("%d", strcmp(str1, str2));	
	return 0;
}