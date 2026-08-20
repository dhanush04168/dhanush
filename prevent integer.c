/*Write a program that takes three integers as input, computes their sum, and calculates the exact decimal average
 using an explicit type cast (float) to prevent integer truncation.*/
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int sum;
    float average;

    
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    sum = num1 + num2 + num3;

    
    average = (float)sum / 3;
    
    printf("Sum = %d\n", sum);
    printf("Exact Average = %.2f\n", average);

    return 0;
}
