/*Number of Days in a Month
 Write a C program to accept a month number (1–12) and year from the user. Using a switch statement,
 display the total number of days in that month. Group months with 31 days and months with 30 days using
 fall-through. For February (month 2), incorporate leap year logic (divisible by 4 and not 100, or divisible by
 400).*/
#include <stdio.h>

int main(void) {
    int month, year;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    
    switch (month) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Total days: 31\n");
            break;


        case 4:
        case 6:
        case 9:
        case 11:
            printf("Total days: 30\n");
            break;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Total days: 29 (Leap Year)\n");
            } else {
                printf("Total days: 28\n");
            }
            break;

      
        default:
            printf("Invalid month number! Please enter a value between 1 and 12.\n");
            break;
    }

    return 0;
}
