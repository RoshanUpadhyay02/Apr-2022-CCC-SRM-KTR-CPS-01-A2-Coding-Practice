/*
Control statement allows you to control the flow of your code
and allows your program to make decisions at the time of execution.
One such statement is the if-else statement.

Syntax :

if (condition)
{
	//statements to be executed if condition is true
}
else
{
	//statements to be executed if the condition is false
}
One example is :

if (var1 == var2)
{
	printf("The variables are equal");
}
else
{
	printf("The variables are not equal");
}
For this task, take as input two integers, and print
"Value1 is less than Value2" if the first number is less than the second number and
"Value1 is not less than Value2" otherwise.

Sample Input 0

10 7
Sample Output 0

Value1 is not less than Value2
Sample Input 1

15 21
Sample Output 1

Value1 is less than Value2
*/



#include <stdio.h>

int main()
{
	int var1, var2;
	//input var1 and var2, compare them and print result accordingly
    scanf("%d %d",&var1,&var2);
	if(var1 < var2){
        printf("Value1 is less than Value2");}
    else{
        printf("Value1 is not less than Value2");}
	return 0;
}