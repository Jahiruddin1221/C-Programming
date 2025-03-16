#include <stdio.h>

// Q.12 Create a program to create a simple calculator that uses a switch statement 
// to perform basic arithmetic operations like addition, subtraction, multiplication, and division.

int main() {
    int num1, num2;
    char opr;

    printf("Please enter first number: ");
    scanf("%d", &num1);
    printf("Please enter second number: ");
    scanf("%d", &num2);

   
    while (getchar() != '\n'); 

    printf("Now, please enter operation (+, -, *, /): ");
    scanf("%c", &opr);

    int result;
    int validOperation = 1; 

    switch (opr) {
    case '+': 
        result = num1 + num2;
        break;
    case '-': 
        result = num1 - num2;
        break;
    case '*': 
        result = num1 * num2;
        break;
    case '/': 
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            validOperation = 0;
        }
        break;
    default:
        printf("Invalid operation. Please enter (+, -, *, /).\n");
        validOperation = 0;
        break;
    }

    if (validOperation) {
        printf("Your final result is %d\n", result);
    }

    return 0;
}
