/*
One a hot summer day Aarti and her friend Anurag decided to buy a watermelon.
 They chose the biggest and the ripest one, in their opinion. After that the
  watermelon was weighed, and the scales showed w kilos. They rushed home,
   dying of thirst, and decided to divide the berry, however they faced a hard problem.

Aarti and Anurag are great fans of even numbers, that's why they want to divide 
the watermelon in such a way that each of the two parts weighs even number of kilos,
 at the same time it is not obligatory that the parts are equal.

They are extremely tired and want to start their meal as soon as possible,
 that's why you should help them and find out, if they can divide the watermelon
  in the way they want. For sure, each of them should get a part of positive weight.

Input Format

The first (and the only) input line contains integer number w — the weight of
 the watermelon bought by them.

Constraints

1 ≤ w ≤ 100

Output Format

Print YES, if they can divide the watermelon into two parts,
 each of them weighing even number of kilos; and NO in the opposite case.

Sample Input 0

8
Sample Output 0

YES
Explanation 0

The boys can divide the watermelon into two parts of 2 and 6 kilos
 respectively (another variant — two parts of 4 and 4 kilos)
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int w;
    scanf("%d",&w);
    if(w == 2)
    {
        printf("NO");
    }
    else if(w%2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
