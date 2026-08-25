/*Question 4 — Grade Evaluation with Expression Reduction
 A school assigns grades based on percentage marks (0–100):
 •
 90 – 100: Grade A
 •
 80 – 89: Grade B
 •
 70 – 79: Grade C
 •
 60 – 69: Grade D
 •
 Below 60: Fail
 Write a program that implements this grading logic using switch (marks / 10) instead of an if-else
 ladder.*/
#include <stdio.h>
int main(void)
{
    int marks;
    
    printf("enter the marks(0 to 100): ");
    scanf("%d",&marks);
    
    switch (marks/10) {
        case 9:
            printf("GRADE A\n");
            break;
       
        case 8:
            printf("GRADE B\n");
            break;
            
        case 7:
            printf("GRADE C\n");
            break;
            
        case 6:
            printf("GRADE D\n");
            break;
        
        case 5:
            printf("FAIL\n");
            break;
            
            
      
        default:
            printf("INVALID NUMBER\n");
            break;
    }
}

