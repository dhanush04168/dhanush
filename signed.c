/*Write a program that demonstrates the difference between a signed int and an
unsigned int by assigning a negative number to both and printing the results.*/
#include<stdio.h>
int main()
{
    signed int mySignedInt = -5;
    unsigned int myunSignedInt = -5;
    
    printf("signed int result (using %%d):  %d\n",mySignedInt);
    printf("unsigned int result(using %%u): %u\n",myunSignedInt);
}
