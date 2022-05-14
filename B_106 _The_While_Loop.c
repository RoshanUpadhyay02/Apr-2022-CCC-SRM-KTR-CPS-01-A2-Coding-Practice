/*
Another type of loop is the while loop.

Syntax :

while(condition){
	statements to be executed;
}
The statements will execute repeatedly untill the condition is true.

Your ask here is to input 5 numbers and print their sum.

Sample Input 0

4 2 8 27 12
Sample Output 0

53
*/



#include <stdio.h>
int main()
{
	int var, sum = 0, input_count = 0;
	while (input_count < 5)//complete the condition so that you only take  5 numbers as input.
	{
		scanf("%d", &var);
		sum += var;
		input_count ++;
	}
	printf("%d", sum);
	return 0;
}

