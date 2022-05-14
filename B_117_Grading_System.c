/*
Write a program that inputs a student's marks and prints his grade according to the following rules :

Marks      	Grade
76 - 100	A
51 - 75		B
26 - 50 	C
0 - 25		D
Sample Input 0

37
Sample Output 0

C
Sample Input 1

85
Sample Output 1

A
*/




#include <stdio.h>

int main()
{
	int marks;
	char grade;
	scanf("%d", &marks);
	//write the code to assign the grade
    if(marks >= 0 && marks <= 25)
    {
        grade = 'D';
    }
    else if(marks >= 26 && marks <= 50)
    {
        grade = 'C';
    }
    else if(marks >= 51 && marks <= 75)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }
    
	printf("%c", grade);
	return 0;
}