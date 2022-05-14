/*
Statement : So we have only used the library . But there are many more libraries with more utilities, some of which are mentioned below :

<stdio.h> Standard Input/Output functions
<stdlib.h> Standard Utility functions
<ctype.h> Character type functions
<math.h> Mathematics functions
<string.h> String handling functions
and many more.

Let's begin with the math.h header file. Here is a list of functions that it provides :

https://www.programiz.com/c-programming/library-function/math.h

For this task you are expected to use the sqrt function which takes a floating point variable as an argument and returns its square root.

Use it to find, given the base and the perpendicular, the hypotenuse of a given triangle.

Sample Input 0

3 4
Sample Output 0

5.000000
*/





#include<stdio.h>
#include<math.h>
double hypotenuse(double base, double perp)
{
	//complete this function
    return sqrt(pow(base,2) + pow(perp,2));
}
int main()
{
	double A, B, C;
	scanf("%lf%lf", &A, &B);
	C = hypotenuse(A, B);
	printf("%.6lf", C);
	return 0;
}