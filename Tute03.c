/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>  //Adding Headerfiles

int main() 
{
    int a, n, sum = 0;   //Declaring Variables

    printf("Enter Number : ");
    scanf("%d", &n);   //Getting Number From User

    for (a = 1; a <= n; ++a) {
        sum += a;
    }

    printf("Sum is = %d", sum);  //Print the Sum

    return 0;
}
