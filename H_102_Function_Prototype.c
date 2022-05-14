/*
A function prototype denotes the basic structure of the function. It tells about the function name, its return type and its parameter. Just like variables, a function needs to be declared before it is called. You can still write a function after the function call as long as you declare the prototype of the function before it.

Here are some examples of prototypes.

void add(int, int); -> denotes a function of name void that doesn't return a value and takes two 
integers as parameters.
int is_prime(int); ->denotes a function of name is_prime that returns an integer and takes one integer as a parameter.
The following piece of code to add two numbers returns an error. Fix it by adding the function prototype before the main function.

Sample Input 0

5 10
Sample Output 0

15
*/






#include<stdio.h>
//add function prototype here
int add(int,int);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d", sum);
	return 0;
}
int add(int var1, int var2)
{
	return (var1 + var2);
}