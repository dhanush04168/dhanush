/*Write a program to declare a value, and print it.
long double variable, assign it a highly precise decimal*/
#include<stdio.h>
#include<limits.h>
int main(void)
{
    
    long double precise_val = 3.12346647788L;
    printf("Highly precise decimal: %11Lf\n",precise_val);
}
