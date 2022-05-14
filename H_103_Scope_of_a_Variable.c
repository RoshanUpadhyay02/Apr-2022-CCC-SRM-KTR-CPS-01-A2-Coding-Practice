/*
In C, a variable is only available inside the most recent pair of curly braces.

Anywhere outside of the braces of the variable declaration the use of that variable is invalid.

See the code below for example, it will give compilation error because the variable sum is not declared in main, but in function fun() and hence is not available outside of fun.

Fix it so that the printf statement executes from within the function fun and not main.

Sample Input 0

10 5
Sample Output 0

15
*/




#include <stdio.h>

void fun(int var1, int var2)
{
	int sum = var1 + var2;
	//print the variable sum here. The scope of sum is in the function fun
    printf("%d",sum);
}
int main()
{
	int var1, var2;
	scanf("%d %d", &var1, &var2);
	fun(var1, var2);
	//The following line will give an error because the variable sum won't be found
	return 0;
}