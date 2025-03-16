
#include <stdio.h>


//Q.1 Create a program that determines if a number is positive, negative, or zero.

int main() {
    int number;
    printf("Please enter number: ");
    scanf("%d", &number);
    
    if (number > 0) {
          printf("\nYour number is positive");
    } else if (number < 0) {
            printf("\nYour number is negative");
        } else {
            printf("\nYour number is zero");
        }
    

    return 0;
}

