/*
There's a Bug who loves strings but hates vowels. He wants to delete all the vowels from a string. Can you do it for him?

Input Format

One line of input that contains the string S.

Constraints

1 <= |S| <= 10^5

Output Format

One string, the string S without vowels.

Sample Input 0

bugshatesvowels
Sample Output 0

bgshtsvwls
*/





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char string[100010];
    scanf("%s",string);
    int i=0;
    while(string[i])
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' )
            i++;
        else
        {
            printf("%c",string[i]);
            i++;
        }
    }
    return 0;
}
