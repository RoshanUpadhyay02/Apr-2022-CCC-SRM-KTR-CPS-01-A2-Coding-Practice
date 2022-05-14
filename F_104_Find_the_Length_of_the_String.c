/*
Every string in C terminates with a null character i.e. ‘\0’. Input functions like scanf and gets append this null character to the end of the string by themselves.

This null character that denotes the end of the string can be used to find the length of any string. If str[x] is a null character, then x is the length of the string.

For this task, complete the strlen function that returns the length of a string.

Sample Input 0

Hello World!
Sample Output 0

12
*/

#include<stdio.h>

int strlen(char* s)
{
    int count = 0;
    while(*s != '\0')
    {
        s += 1;
        count++;
    }
    return count;
}
int main()
{
	char str[50];
	gets(str);
	printf("%d", strlen(str));
	return 0;
}