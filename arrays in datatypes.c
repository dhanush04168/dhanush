/*Write a program to declare an integer array of size 5, initialize it with specific values, and
 print those values in reverse order.*/
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array values in reverse order: ");
    
    for (int i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");

    return 0;
}
