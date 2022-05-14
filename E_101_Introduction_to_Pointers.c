/*
We have already seen pointers in brief. They are nothing but variables
that store the address of a memory location. To recall, a pointer can be
initialised with the address of an already existing variable (int* p = &var)
and its value can be modified by the indirection/dereference operator (*p).
In the above declaration, the pointer points towards the memory allotted to
the variable that has already been defined. What if we dont want our pointer
to point towards another variable? What if we want our pointer to point
towards a fresh block of memory? In that case we have to manually allot
memory to the pointer using malloc.

Syntax :

<datatype>* <pointer_name> = (<datatype>*) malloc(sizeof(<datatype>));
For example :

int* pointer = (int*) malloc(sizeof(int));
malloc operator will allocate memory equal to the size of one integer,
and return a void pointer pointing toward that memory. We cast the void
pointer to the datatype of our choice which is int here, hence our pointer
will now point at a fresh memory that can be used.

For this task, write a program to take as input one integer and print it.
Do not declare a variable of type int but instead create a pointer of type
int and allocate fresh memory to it. Use this pointer as your variable.

Sample Input 0

45
Sample Output 0

45
*/






#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
	int *var = (int*) malloc(sizeof(int));//allocating memory to a new int pointer

	scanf("%d", var ); //store the input to var. recall that a pointer is address itself so you
	//do not need to use the ampersand '&' (address of) sign.
	printf("%d", *var);//print the variable var here. again, recall that you need to use the 
	//indirection/dereference operator '*' to access a pointers value.	
	return 0;
}