/*
The label keyword is used to mark a statement in C. A label can be any plain text except a C keyword. The goto keyword is used to jump to any label. For example :

int n = 1;
while (n <= 10){
if (n % 3 == 0) goto label1;
printf("%d ", n);	
label1 : n++;
}
will print :

1 2 4 5 7 8 10
For this task you will write a code that inputs a number N, and keeps dividing it by 2 until it is even printing all the intermediate numbers as well.

Sample Input 0

24
Sample Output 0

24 12 6 Process Complete
*/



#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	while (num > 0)
	{
		if (num % 2 == 1) goto label;//write the goto statement here to skip to the end
		printf("%d ", num);
		num = num/2;
	}
	label : printf("Process Complete");
	return 0;
}