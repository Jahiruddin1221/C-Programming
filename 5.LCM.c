#include<stdio.h>
/*Create a program to find the Least Common Multiple (LCM) of two numbers.*/

int main() {
    int first, second;
    printf("Please enter your first number: ");
    scanf("%d", &first);
    printf("Now, enter your second number: ");
    scanf("%d", &second);

   int i = 1;
   while (i <= second) {
    int fact = first * i;
    if (fact % second == 0) {
        printf("\nLCM is %d", fact);
    }
    i++;
   }

    
    
    return 0;

    
}