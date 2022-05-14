/*
The for loop is one of the most powerful tools in C. It enables you to execute a given set of statements multiple times. Syntax :

for (initialisation ; condition ; increment)
{
	set of statements ;
}
Initialisation : initialise a loop variable to some value.
Condition : the loop continues to run if this condition is true otherwise it ends.
increment : Make changes (usually increment) the loop variable.
For example : The following for loop will print the first 5 numbers :

int i;
for (i = 1; i <= 5; i++)
{
	printf("%d ",i);
}
Output : 1 2 3 4 5

Your task here is to print the first 10 natural numbers separated by a space.


*/


#include <stdio.h>

int main()
{
	int i; //loop variable;
	//run a for loop with i ten times and print then value of i as it goes from 1 to 10
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
	return 0;
}

