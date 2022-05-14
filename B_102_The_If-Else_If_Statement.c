/*
Sometimes you may want to check multiple conditions
 instead of just one. The if-else if statements does exactly that.
Syntax :

if (condition) {statements to execute if condition is true}
else if(condition2) {statements to execute if condition2 is true}
....
else {statements to execute if none of the conditions were true}
You can add as many conditions as you want

For example :

if (var1 % 3 == 0) {printf("Number is divisible by 3");}
else if(var1  % 2 == 0) {printf("Number is divisible by 2");}
else {printf("Number not divisible by 2 or 3");}
For this task, you are to write a code that inputs 2 variables and determine which one is greater or if they are equal

Sample Input 0

15 7
Sample Output 0

value1 is greater
Sample Input 1

96 96
Sample Output 1

both values are equal
*/

#include <stdio.h>

int main()
{
    int var1, var2;
    scanf("%d %d",&var1,&var2);
    if(var1 > var2)
    {
        printf("value1 is greater");
    }
    else if(var1 < var2)
    {
        printf("value2 is greater");
    }
    else
    {
        printf("both values are equal");
    }
    return 0;
}