/*Write a program using the sizeof() operator to print the byte size of char , int ,
 float , double , and short int on your machine.*/
#include<stdio.h>
int main(void)
{
    printf(".....sizes......\n");
    printf("size of char: %zu bytes\n",sizeof(char));
    printf("size of int:  %zu bytes\n",sizeof(int));
    printf("size of float:  %zu bytes\n",sizeof(float));
    printf("size of double:  %zu bytes\n",sizeof(double));
    printf("size of short int:  %zu bytes\n",sizeof(short int));
}
