/*
Write a function strcat that takes two strings as input, and puts the first string at the end of the second string. For eg.

S1 = “hello “ and S2 = “world”.

After calling strcat(S1, S2) S1 must become equal to “hello world”.

Sample Input 0

Hello
World
Sample Output 0

HelloWorld
*/





#include<stdio.h>
void strcat(char* s1, char* s2)
{
    int i=0,j=0;
    while(s1[i++]);
    int len1 = i;
    while(s2[j++]);
    int len2 = j;
    j=0;
    for(int i=len1-1;i<len2+len1;i++)
    {
        s1[i] = s2[j];
        j++;
    }
}
int main()
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    strcat(str1, str2);
    puts(str1);
    return 0;
}