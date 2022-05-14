/*
In the last task did you notice how instead of taking "Hello World!" as input only the first word "Hello" was stored? This is because the scanf function only takes string input until it encounters a space. Hence all the data after the space is ignored.

So, how do you take as input an entire line of characters that may or may not contain spaces? The answer is gets. This is analogous to the getc function for characters. The character array is passed as an argument to this function and it stores in the array exactly one line of input.

Example : gets(str); will store one line from the console to string str. puts(str) on the other hand will write one line i.e. str to the console.

For this task use the gets and puts functions to input one string and print it to the console.

Sample Input 0

Hello World!
Sample Output 0

Hello World!
*/




#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	//input string here using gets
    gets(str);
	//print string here using puts
    puts(str);
	
	return 0;
}