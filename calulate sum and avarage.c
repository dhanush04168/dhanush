/*Write a program that asks the user to input 5 calculates their total sum and average*/
#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    float average;

    printf("Please enter 5 numbers:\n");

    
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        
       
        sum += numbers[i];
    }

   
    average = (float)sum / 5;

    
    printf("\nTotal Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
