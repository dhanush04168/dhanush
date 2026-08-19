/*Write a C program that takes two integers from the user and outputs their sum, difference, product, quotient, and
 remainder using all five basic arithmetic operators.*/
#include<stdio.h>
int main(void)
{
    int a,b;
    printf("enter the number1\n");
    scanf("%d",&a);
    
    printf("enter the number2\n");
    scanf("%d",&b);
    
    printf("sum: a + b =%d\n",a+b);
    printf("difference: a - b =%d\n",a-b);
    printf("product: a * b =%d\n",a*b);
    printf("quotient: a / b =%d\n",a/b);
    printf("remainder: a %%b =%d\n",a %b );
}
