/*
A function is a block of code that may take some inputs and carries out a specific task.

Function syntax :

<return_type> <function_name>(<input_parameters>)
For example :

int add(int var1, int var2)
int is_print(int num)
void find_answer(int val1, int val2)
Return type denotes the type of value returned by the function. Void means the function will not return any value.

Write a program to print Hello World! Using a function of type void and that takes no parameters.

Sample Output 0

Hello World!
*/






#include<stdio.h>
//write your function print() here
void print()
{
    printf("Hello World!");
}

int main()
{
	print();
	return 0;
}