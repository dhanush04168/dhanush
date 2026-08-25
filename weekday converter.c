/*Weekday Converter
 Write a C program that prompts the user for an integer between day name (1 for Monday, 2 for Tuesday, ..., 7 for Sunday). Use the index! Please enter a value from 1 to 7."*/
#include<stdio.h>
int main(void){
    
    int number;
    
    printf("enter the number 1 to 7 :");
    scanf("%d",&number);
    
    switch(number){
            case 1:
            printf("monday\n");
            break;
            
        case 2:
        printf("tuesday\n");
        break;
            
        case 3:
        printf("wensday\n");
        break;
            
        case 4:
        printf("thursday\n");
        break;
            
        case 5:
        printf("friday\n");
        break;
            
        case 6:
        printf("saturday\n");
        break;
            
        case 7:
        printf("sunday\n");
        break;
            
        
        default:
        printf("invalid number\n");
            
          
    }
}
