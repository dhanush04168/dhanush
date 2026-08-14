/*Write a program that divides two integer variables (e.g., 5 and 2) but uses explicit type
 casting to ensure the exact decimal result (2.5) is printed.*/

#include<stdio.h>
int main()
{
    int a=5,b=2;
    
    float result = (float)a / b;
    printf("Result of 5/2 with casting: %.1f\n", result);
}
