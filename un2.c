
#include <stdio.h>
int main() {
    int x, i; // Declare variables for user input and loop counter
    printf("Input an integer: ");
    scanf("%d", &x); // Prompt user for an integer

    for(i = 1; i <= 100; i++) // Loop through numbers from 1 to 100
    {
        if((i%x) == 3) { // Check if the remainder of i divided by x is 3
            printf("%d\n", i); // Print i if the condition is met
        }
    }

    return 0;
}

