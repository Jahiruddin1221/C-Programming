#include<stdio.h>

// Q. 10 Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" 
// using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).

int main() {
    int marks;

    printf("Please enter first number: ");
    scanf("%d", &marks);

    marks >= 80 ? printf("High") : marks >= 50 ? printf("Medium") : printf("Low");

    return 0;
}