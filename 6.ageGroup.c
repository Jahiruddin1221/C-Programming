#include<stdio.h>

// Q.6 Create a program that categorize a person into different age groups

// Child -> below 13
// Teen -> below 20
// Adult -> below 60
// Senior-> above 60

int main() {
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age > 60) {
        printf("Your are a senior");
    } else if (age >= 25 && age < 60) {
         printf("Your are a Adalt");
    }  else if (age >= 18 && age < 25) {
         printf("Your are a Young");
    }  else if (age > 0 && age < 18) {
         printf("Your are a child");
    }
}

