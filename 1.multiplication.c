#include<stdio.h>
/*Develop a program that prints the multiplication table for a given number.*/

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    for(int i = 1; i < 10; i++) {
    printf("\n%d X %d = %d", i, number, (number * i));
    }

}