#include<stdio.h>
/*Write a function that calculates the factorial of a given number.*/

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    int i = 1;
    int fact = 0;
    while (i <= number) {
        fact = fact * i;
        i++;
    }

    printf("Your factorialm 1 to %d is %d", number, fact);

    return 0;
}