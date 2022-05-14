/*
If-Else is the first type of selection statement in C. The second is Switch-Case.

Syntax :

switch(variable)
{
	case 1 : statements to be executed if value of variable is 1
		break;
	case 2 : statements to be executed if value of variable is 2
		break;
	..
	..
	Default : statements to be executed if no condition is satisfied
		break;
}
See the code below for better understanding, complete the rest of it so that it prints "vowel" or "not vowel".

Sample Input 0

a
Sample Output 0

vowel
Sample Input 1

u
Sample Output 1

vowel
*/




#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a' : printf("vowel"); break;
		case 'e' : printf("vowel"); break;
		//write the cases for i, o, and u.
        case 'i' : printf("vowel"); break;
        case 'o' : printf("vowel"); break;
        case 'u' : printf("vowel"); break;
	

		default : printf("not vowel"); break;
	}	
	return 0;
}