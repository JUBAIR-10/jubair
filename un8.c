

#include<stdio.h>      // Include the standard input/output header file.
#include<stdlib.h>     // Include the standard library header file.

int main ()          // Start of the main function.
{
long int x, y;    // Declare two long integer variables 'x' and 'y'.

printf("\n Input 1st number (positive or negative) : ");   // Prompt the user to input the first number.
scanf("%ld",&x);   // Read the user's input and store it in 'x'.

printf(" Input 2nd number (positive or negative) : ");   // Prompt the user to input the second number.
scanf("%ld",&y);   // Read the user's input and store it in 'y'.

printf (" The absolute value of 1st number is : %ld\n",labs(x));   // Calculate and print the absolute value of 'x'.
printf (" The absolute value of 2nd number is : %ld\n\n",labs(y));   // Calculate and print the absolute value of 'y'.

return 0;   // Return 0 to indicate successful execution of the program.
}   // End of the main function.
