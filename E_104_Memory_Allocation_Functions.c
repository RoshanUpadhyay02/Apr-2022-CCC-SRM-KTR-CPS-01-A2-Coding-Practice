/*
Statement : C has four functions for dynamic memory management :

malloc() - allocates memory but does not initialise it, hence contains garbage in beginning

calloc() - allocates memory and initialises everything to zero

realloc() - extends the memory already allocated to a pointer

free() - returns the memory to the system hence deallocating the memory of the pointer

A directly declared array in C is a local variable. Hence, if you were to declare an array
and return it inside a function, it wouldn't work because the array memory would be deleted
as soon as the function execution is over. Instead, we use malloc()/calloc() to assign a
contiguous block of memory, use it as an array and then return it. Memory allocated by
malloc/calloc is not local i.e. it persists even after the function is over.

In the below code, the function tries to return a local array, fix it by using malloc/calloc
to declare the array.

Sample Input 0

ToggleCase
Sample Output 0

tOGGLEcASE
*/





#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char* newstr(char* str)
{
	char *res; //use malloc to declare this character array
    res = (char *)malloc(sizeof(char)*50);
	int i, n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (islower(str[i])) res[i] = toupper(str[i]);
		else res[i] = tolower(str[i]);
	}
	res[n] = '\0';
	return res;
}	
int main()
{
  char str[50];
  gets(str);
  char* new_str = newstr(str);
  puts(new_str);
  return 0;
}