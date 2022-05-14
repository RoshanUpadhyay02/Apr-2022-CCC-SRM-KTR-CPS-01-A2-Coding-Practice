/*
In C a string is nothing but an array of characters that ends with a null character '\0'.
Ways of declaring a string :

char str[] = "Hello World!"
char str[20] = "Hello World!"
char str[] = {'H', 'e', 'l', 'l', 'o', '\0'}.
When declaring a string using double quotes you don't have to add the null
character yourself, the C compiler will do it for you. '%s' is used to process
a string while using scanf or printf statements.

For this task, you are to initialise a string to "Hello World!" and print it to the console.

Sample Output 0

Hello World!
*/





#include<stdio.h>
#include<string.h>
int main()
{
	//initialise string here
    char *str = "Hello World!";
	printf("%s", str);
	return 0;
}