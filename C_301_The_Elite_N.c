/*
The Elite N are a number of people in a line, that you have to beat in order to be the Pokémon Champion.
Each person has exactly one Pokémon, with a predetermined power level.
When a battle occurs, the powers of both Pokémon steadily decrease until either reaches 0. This will be referred to as fainting.
You have to make sure your Pokémon doesn't faint, i.e., its power should remain > 0
You can take rest and restore your Pokémon to full power to start battling again. But it takes one day to do so.
When you rest the current opponent also takes a rest restoring his powers to full.
You can fight as many battles as possible in a day until you rest.
Find the number of days you will need to defeat the Elite N and become the champion.
Note that there might be a person stronger than you whom you cannot defeat. Hence you will have to lose.
Print the number of days required to defeat the Elite N, and -1 if you can't.
Input Format

The first line of input contains your Pokémon's power, K. 
The second line contains the number of opponents, N. The next line 
contains n numbers A1, A2 ... An, where Ai is the power of the ith opponent.

Constraints

1 <= k <= 1000

1 <= n <= 100000

1 <= a1, a2, a3, ..., an <= 1000

Output Format

Output only one number, the number of days taken to defeat the Elite N.

Sample Input

10

7

1 2 4 7 2 5 5

Sample Output

4

Explanation

On the first day you defeat 1st, 2nd and 3rd opponent. As the remaining
power would be 3, you can't battle the 4th one. So you take rest. On the
2nd day, you defeat the 4th and the 5th opponent, then take rest. On the
3rd day, you defeat the 6th enemy only. As you cannot let your pokemon faint,
you will have to take rest. On the 4th day you defeat the last of the Elite N
and become the champion! :D
*/





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int p,k,days=1,flag=1;
    scanf("%d",&p);
    
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    k = p;
    for(i=0;i<n;i++)
    {
        if(arr[i] >= p)
        {
            printf("-1");
            flag = 0;
            break;
        }
        else if(arr[i] < k)
        {
            k -= arr[i];
        }
        else
        {
            k = p;
            days++;
            i--;
        }
    }
    if(flag)
    {
        printf("%d",days);
    }
    
    return 0;
}
