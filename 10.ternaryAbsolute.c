#include<stdio.h>

// Q.9 Create a program to calculate the absolute value of a given integer using ternary operator.

int main() {
    int number;

    printf("Please enter first number: ");
    scanf("%d", &number);

    printf("%d number is absolute value", (number > 0 ? number : -number));

    return 0;


}