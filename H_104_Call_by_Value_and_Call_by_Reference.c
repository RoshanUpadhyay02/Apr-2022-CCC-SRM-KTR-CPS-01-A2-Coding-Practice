/*
When we normally call a function, we use call by value. Any changes made to the variables inside the function will not alter the contents of the variables that were passed to the function as parameters.

A second type of function call is call by address where we pass the physical address of the variable as parameter and hence any changes made to the variable in the function will reflect upon the original variable also.

For example :

void add(int* a, int* b)
{
	(*a) = (*a) + (*b);
}
In main function :

a = 10, b = 5; 
add(&a, &b);
This will change the value of a in main from 10 to 15.

Note that since we are passing the address of variables using ampersand '&', we need to use pointers as our arguments in the function to accept the address of the variables. Indirection operator '*' will be used to dereference the pointer and get its value.

For this task, write a function void power(int *res, int exponent) that stores in variable res the value of 2^exponent (2 raised to the power exponent).

Hint : Recall that since one left shift multiplies a number by 2, (1<

Sample Input 0

5
Sample Output 0

32
*/


#include<stdio.h>
void power(int*, int);
int main()
{
	int res, val;
	scanf("%d", &val);
	power(&res, val);
	printf("%d", res);
	return 0;
}
//implement the power function here
void power(int *a, int b)
{
    int sum=1;
    while(b--)
    {
        sum *= 2;
    }
    *a = sum;
}