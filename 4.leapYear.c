
#include <stdio.h>

//Q.4 Create a program that determines if a given year is a leap year
// (considering conditions like divisible by 4 but not 100, unless also divisible by 400).

int main() {
    int year;
    printf("Please enter your year: ");
    scanf("%d", &year);
    
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d Your year is leap year", year);
    } else {
           printf("%d Your year is not a leap year", year);
    }
  
 
    return 0;
}