/*
Your task is simple, input 5 numbers and for each one of them on a new line print "odd" if they are odd or "even" if they are even.

Sample Input 0

5 2 10 7 12
Sample Output 0

odd
even
even
odd
even
*/



#include <stdio.h>

int main()
{
	int var, input_count = 0;
	//write your code here
    while(input_count < 5)
    {
        scanf("%d",&var);
        if(var%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
        input_count++;
    }
	return 0;
}

