#include<stdio.h>

// Q.5 Create a program that calculates grades based on marks

// A -> above 90%
// B -> above 75%
// C -> above 60%
// D -> above 30%
// F -> below 30%

int main() {
    int marks;

    printf("Pelease enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("You have got A grade");
    } else if (marks <= 90 && marks > 75) {
          printf("You have got B grade");
    } else if (marks <= 75 && marks > 60) {
          printf("You have got C grade");
    } else if (marks <= 60 && marks > 30) {
          printf("You have got D grade");
    } else {
          printf("You have got F grade");
    }
  
}