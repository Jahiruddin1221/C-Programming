#include<stdio.h>

// Q.8 Create a program to find if the given number is even or odd using ternary operator

int main() {
    int number;

     printf("Please enter first number: ");
    scanf("%d", &number);

    int num = number % 2 == 0 ? printf("The number is even") : printf("The number is odd");
}