/*Menu-Driven Arithmetic Calculator
 Write a complete C program to implement a menu-driven arithmetic calculator. Take two floating-point
 numbers and a character operator (+,-,*,/,%)from the user. Use a switch statement to
 compute and display the result. Handle division-by-zero gracefully and provide an appropriate error
 message in the default case for invalid operators*/
#include <stdio.h>
#include <math.h>
int main(void){
    
    float A,B,result;
    char op;
    
    printf(" ==calculator== ");
    printf("available operator: +,-,*,/,%% \n");
    
    printf("enter an operator(+,-,*,/,%%)");
    scanf("%c",&op);
    
    printf("enter A value\n");
    scanf("%f",&A);
    
    printf("enter b value\n");
    scanf("%f",&B);
    
    switch(op){
        case'+':
            result=A+B;
            printf("result: %.2f + %.2f = %.2f",A,B,result);
            break;
            
        case'-':
            result=A-B;
            printf("result: %.2f - %.2f = %.2f",A,B,result);
            break;
            
        case'*':
            result=A*B;
            printf("result: %.2f * %.2f = %.2f",A,B,result);
            break;
            
        case'/':
            if(B !=0){
                result=A/B;
                printf("result: %.2f / %.2f = %.2f",A,B,result);
            }else{
                printf("error division by zero not allowed \n");
            }
            break;
            
        case'%':
            if(B != 0){
                result = fmod(A,B);
                printf("result: %.2f %% %.2f = %.2f",A,B,result);
            }else{
                printf("error division by zero not allowed \n");
            }
            break;
    }
    
}
