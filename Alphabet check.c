/*Character Type Identifier (Alphabet Check)
 Task: Take a single char input and check whether it is an alphabet character (lowercase or uppercase).
 Hint: Check if the character lies between 'a' and 'z' OR between 'A' and 'Z' . Group each sub-condition
 with parentheses and ||.*/
#include<stdio.h>
int main(void)
{
    char ch;
    
    printf("enter the character :");
    scanf("%c",&ch);
    
    (ch >= 'a' && ch <= 'z')
            ? printf("%c is a (lowercase)\n", ch)
            : (ch >= 'A' && ch <= 'Z')
                ? printf("%c is a (Uppercase)\n", ch)
                : printf("%c is not an alphabet\n", ch);
    
    
    
}
