/*
So far we have been calling a function from main or some other function. It is also possible to call a function from within the same function. This phenomenon is known as recursion and the function that calls itself is called a recursive function.

A recursive function has a base case, which when met, will stop further recursive calls. Take a look at this function for example :

void func(int n)
{
	if (n > 5) return; //this is the base case.
	printf("%d ", n);
	func(n + 1); //calling the same function again with the next value
}
calling func(1) from main will return in the following output :

1 2 3 4 5
Do a dry run of this code on paper to understand it better.

For this task, you are supposed to modify the above recursive function so that it prints numbers 5 4 3 2 1 instead of 1 2 3 4 5.

Sample Output 0

5 4 3 2 1
*/







#include <stdio.h>
void func(int n)//modify this function so it prints numbers in reverse
{
	if (n > 5) return; //this is the base case.
	func(n + 1);
    printf("%d ", n);
}//Hint : you can change the order of statements in the function to achieve your goal.
int main()
{
	func(1);
	return 0;
}