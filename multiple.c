#include <stdio.h> // Include the standard input-output library for functions like printf.

int main()
{               
    int number;
    printf("Input a positive integer: ");
    scanf("%d", &number); 
    
    if (number <= 0)
    {
        printf("Error: enter positive integer.\n"); 
        return 1;                                            
    }
    int i = 1; 
    while (i <= 10)
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++; 
    }
    return 0;
    
}
