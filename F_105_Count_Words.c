/*
Write a program that takes as input one line of string data and prints the number of words in it.

Sample Input 0

The quick brown fox jumps over the lazy dog
Sample Output 0

9
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//your code here
    int count=0;
    char str[101];
    char * token;
    gets(str);
    token = strtok(str," ");
    while(token != NULL)
    {
        count++;
        token = strtok(NULL," ");
    }
    printf("%d",count);
	return 0;
}