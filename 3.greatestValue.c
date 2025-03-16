#include <stdio.h>


//Q.3 Create a program that determines the greatest of the three number.

int main() {
    int num1, num2, num3;
    printf("Please enter your first number: ");
    scanf("%d", &num1);
     printf("Please enter your second number: ");
    scanf("%d", &num2);
     printf("Please enter your three number: ");
    scanf("%d", &num3);
    
     if (num1 > num2 && num1 > num3) {
         printf("your greatest number is %d", num1);
    } else if (num2 > num1 && num2 > num3) {
         printf("your greatest number is %d", num2);
    } else {
         printf("your greatest number is %d", num3);
        
    }

    
   
    return 0;
}