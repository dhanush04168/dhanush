/*Leap Year Checker
 Task: Take a year as input and determine whether it is a leap year.
 Hint: A year is a leap year if it is divisible by 4 AND not divisible by 100, OR if it is divisible by 400. Use % , && ,
 and || .*/
#include<stdio.h>
int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

   
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        ? printf("%d is a leap year.\n", year)
        : printf("%d is not a leap year.\n", year);

    
}

