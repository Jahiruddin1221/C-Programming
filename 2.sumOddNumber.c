#include<stdio.h>
/*Create a program to sum all odd numbers from 1 to a specified number N.*/

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++) {
        if (number % 2 ==0) {
            printf("%d", number);
        }
    }

}