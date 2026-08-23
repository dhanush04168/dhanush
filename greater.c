/*Maximum of Two Distinct Numbers BEGINNER
 Read two integers from standard input. Determine which value is strictly greater, or print "Both numbers are equal" if
 they have identical values.*/
#include<stdio.h>
int main(void)
{
    int num1,num2;
    
    printf("enter numbers : ");
    scanf("%d%d",&num1,&num2);
    
    if(num1 > num2){
        printf("%d   greater than %d\n",num1,num2);
    }
    else if (num2 > num1){
        printf("%d  greater than %d",num2,num1);
    }
    else{
        printf("both or equal\n");
    }
}
