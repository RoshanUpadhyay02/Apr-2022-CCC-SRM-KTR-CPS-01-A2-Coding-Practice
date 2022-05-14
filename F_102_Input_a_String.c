/*
Now that you know how to initialise a string, this time you are to write a program that takes as input one string using scanf and prints it.

Hint : Since the string is an array of characters, you don't need to write ampersand '&' before it while using it in scanf.

Reminder : Use the '%s' token to denote a string.

Sample Input 0

Hello World!
Sample Output 0

Hello
*/



#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	//input string here using scanf
    scanf("%s",str);
	//print string here using printf
    printf("%s",str);
	
	return 0;
}