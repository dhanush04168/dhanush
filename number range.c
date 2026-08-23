/*2. Number Range Validator
 Task: Check if an integer entered by the user lies between 10 and 50 (inclusive).
 Hint: In C, chained syntax like 10 <= x <= 50 does not work as expected. Combine two distinct relational
 comparisons using &&*/
#include<stdio.h>
int main(void)
{
    
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    
    (x >= 10 && x <= 50)
        ? printf("%d 10 and 50 betwwen (inclusive)",x)
        : printf("%d is not betweeen 10 and 50\n",x);
    
}

    
    

