#include<stdio.h>

// Q.11 Create a program to print the month of the year based on a number (1-12) input by the user.

int main() {
    int month;

    printf("Please enter your month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1: printf("January");
        break;
        case 2: printf("Feb");
        break;
        case 3: printf("Mar");
        break;
        case 4: printf("Apr");
        break;
        case 5: printf("May");
        break;
        case 6: printf("Jun");
        break;
        case 7: printf("Jul");
        break;
        case 8: printf("Aug");
        break;
        case 9: printf("Sep");
        break;
        case 10: printf("Oct");
        break;
        case 11: printf("Nov");
        break;
        case 12: printf("Dec");
        break;
        default:
        printf("Invelade month please enter between (1 - 12)");
        break;
        
    }
}