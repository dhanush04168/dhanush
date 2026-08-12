/*Write a program to calculate simple interest. Use float for the principal, rate, and time
 variables*/
#include <stdio.h>

int main() {
    
    float principal, rate, time, simple_interest;

    
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (%%): ");
    scanf("%f", &rate);

    printf("Enter the Time (in month): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.0;

   // printf("\n--- Results ---\n");
    printf("Principal      : $%.2f\n", principal);
    printf("Interest Earned: $%.2f\n", simple_interest);
    printf("Total Amount   : $%.2f\n", principal + simple_interest);

    return 0;
}
