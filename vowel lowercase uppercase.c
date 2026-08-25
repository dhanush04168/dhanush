/*Vowel or Consonant via Fall-Through
 Write a program that takes a single English alphabet character as input and uses a switch determine whether it is a Vowel or a Consonant. Use intentional case fall-through to check both
 lowercase and uppercase vowels ( 'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U' )
 efficiently.*/
#include <stdio.h>
int main(void)
{
    char alphabet;
    
    printf("enter the a to i:");
    scanf("%c",&alphabet);
    
    switch (alphabet) {
        case 'a':
            printf("lowercase vowel\n");
            break;
       
        case 'e':
            printf("lowercase vowel\n");
            break;
            
        case 'i':
            printf("lowercase vowel\n");
            break;
            
        case 'o':
            printf("lowercase vowel\n");
            break;
        
        case 'u':
            printf("lowercase vowel\n");
            break;
            
            
        case 'A':
            printf("uppercase vowel\n");
            break;
        
        case 'E':
            printf("uppercase vowel\n");
            break;
            
        case 'I':
            printf("uppercase vowel\n");
            break;
            
            
        case 'O':
            printf("uppercase vowel\n");
            break;
            
        case 'U':
            printf("uppercase vowel\n");
            break;
            
        default:
            printf("invalid character\n");
            break;
    }
}
