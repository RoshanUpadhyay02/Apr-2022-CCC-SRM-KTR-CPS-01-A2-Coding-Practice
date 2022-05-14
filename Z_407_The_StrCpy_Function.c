/*
For primitive data types we could just use the '=' assignment operator to copy them but that is not possible with strings as strings are arrays of characters.

To fulfil this task you will write a function known as strcpy(char*, char*)

Prototype :

void strcpy(char* destination, char* source).
For example : if

str1[50] = "hello world!"
then upon using strcpy(str2, str1), even str1 will be equal to "hello world!".

Implement the strcpy function to complete this task.

Sample Input 0

Rewarding Task
Sample Output 0

Rewarding Task
Rewarding Task
*/





#include<stdio.h>
void strcpy(char* s1, char* s2)
{
    while(*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}
int main()
{
	char str1[50], str2[50];
	gets(str1);
	strcpy(str2, str1);
	puts(str1);
	puts(str2);	
	return 0;
}