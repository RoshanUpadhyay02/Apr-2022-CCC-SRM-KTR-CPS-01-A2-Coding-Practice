/*
Let's take a look at the ctype.h library :

https://www.programiz.com/c-programming/library-function/ctype.h

For this task, you should take as input a letter. If the letter is uppercase, print its lowercase form and if the letter is lowercase, print its uppercase form.

Hint : Use the islower/isupper/tolower/toupper functions.

Sample Input 0

q
Sample Output 0

Q
*/






#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	//your code here
    if(isupper(ch))
    {
        printf("%c",tolower(ch));
    }
    else
    {
        printf("%c",toupper(ch));
    }

	return 0;
}