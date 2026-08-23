/*Even or Odd Number BEGINNER
 Write a C program that prompts the user to enter an integer. Use the modulo operator ( % ) and an verify and print whether the number is Even or Odd.*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d even number\n",num);
        
    }
  else {
       printf("%d odd number\n",num);
   }
}
