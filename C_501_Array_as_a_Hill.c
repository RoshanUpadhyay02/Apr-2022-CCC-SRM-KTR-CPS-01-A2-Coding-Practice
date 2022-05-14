/*
Array of integers is a hill, if:

it is strictly increasing in the beginning;
after that it is constant;
after that it is strictly decreasing.
The first block (increasing) and the last block (decreasing) may be absent. 
It is allowed that both of this blocks are absent.
For example, the following three arrays are a hill: [5, 7, 11, 11, 2, 1], [4, 4, 2], [7],
but the following three are not unimodal: [5, 5, 6, 6, 1], [1, 2, 1, 2], [4, 5, 5, 6].

Write a program that checks if an array is a hill.

Input Format

The first line contains integer n (1 ≤ n ≤ 100) — the number of elements in the array.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1000) — the elements of the array.

Output Format

Print "yes" if the given array is a hill. Otherwise, print "no".
*/






#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i = 0;
    while(i < n-1)
    {
        if(a[i] < a[i+1])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    while(i < n-1)
    {
        if(a[i] == a[i+1])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    while(i < n-1)
    {
        if(a[i] > a[i+1])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    if(i == n-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
