/*
When a pointer is made to point towards an array and is used as an array itself, any changes made to the pointer will be reflected in the original array since the pointer is pointing towards the original array itself.

For this task, implement the function that replaces all the elements in an array by their square roots.

Sample Input 0

4 15 16 20 25
Sample Output 0

2.0000 3.8730 4.0000 4.4721 5.0000 
*/




#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void replace(double* pointer, int arr_size)
{
	int i;
    for(i=0;i<arr_size;i++)
    {
        *(pointer+i) = sqrt(*(pointer+i));
    }
}	
int main()
{
  int i;
  double arr[5];
  for (i = 0; i < 5; i++) scanf("%lf", &arr[i]);
  double* p = arr; //can also use double* p = &arr[0];
  replace(p, 5); //changes to p will reflect in array arr
  for (i = 0; i < 5; i++) printf("%.4lf ", arr[i]);
  return 0;
}