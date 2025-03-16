#include<stdio.h>

// Q.7 Create a program to find the minimum of two numbers using ternary operator.


int main() {
    int first, second;

    printf("Please enter first number: ");
    scanf("%d", &first);
    printf("Please enter second number: ");
    scanf("%d", &second);


    int min = first > second ? second : first;
    printf("Minimum value is %d", min);
}