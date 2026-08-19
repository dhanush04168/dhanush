/*Write a program that accepts an integer n . Use the modulus operator ( % ) to extract and print its last digit, and the
 division operator ( / ) to print the remaining number without its last digit.*/
#include<stdio.h>
int main(void)
{
    int n;
    printf("enter the n value\n");
    scanf("%d", &n);
    
    
    printf("n = %d\n",n%10);
    printf("n = %d\n",n/10);
}
