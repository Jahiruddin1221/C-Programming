#include <stdio.h>


//Q.2 Create a program that determines if a number is odd, or even.


int main() {
    int number;
    printf("Please enter number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
    printf("Your number is even.");
    } else {
          printf("Your number is odd.");
    }
    

    return 0;
}

