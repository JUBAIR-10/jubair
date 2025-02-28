#include <stdio.h>

int main ()
{
    // Declare a variable "x" to hold the input number
    float x = 0;

    // Prompt the user to input a number
    printf("Input a number: ");

    // Read the input number
    scanf("%f", &x);

    // Check the range of the input number and print the corresponding message
    if (x >= 0 && x <= 30)
        printf("Range [0,30]\n");
    else if (x > 30 && x <= 50)
        printf("Range (30,50]\n");
    else if (x > 50 && x <= 80)
        printf("Range (50,80]\n");
    else if (x > 80 && x <= 100)
        printf("Range (80,100]\n");
    else
        printf("\nNot within range..!\n");
}


