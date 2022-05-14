/*
Implement the function palindrome that accepts one string as an argument and returns 1 if the string is a palindrome and 0 otherwise.

A palindrome is a string that remains the same even when reversed.

Sample Input 0

kawaki
Sample Output 0

0
*/



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int palindrome(char* str)
{
	//your code here
    
    int i,len = strlen(str);
    char a[len];
    for(i=0;i<len;i++)
    {
        a[i] = str[i];
    }
    char temp;
    for(i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    if(strcmp(a,str) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}	
int main()
{
  char str[50];
  gets(str);
  printf("%d", palindrome(str));
  return 0;
}