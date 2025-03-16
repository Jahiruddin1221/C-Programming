#include<stdio.h>
/*Create a program to find the Least Common Multiple (LCM) of two numbers.*/

int main() {
    int num;
     printf("Please enter the number: ");
     scanf("%d", &num);
     int sum = 0;


   while (num > 0) {
      int store = num % 10;
      sum = sum + store;
      num = num / 10;


   }
   
   
        printf("The sum of digit is%d", sum);
        return 0;
     }
