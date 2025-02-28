#include<stdio.h>
int main() {
    int p, r, t, int_amt;

    // Prompt user to input principle, rate of interest, and time
    printf("Input principle, Rate of interest & time to find simple interest: \n");
    scanf("%d%d%d", &p, &r, &t);

    // Calculate simple interest
    int_amt = (p * r * t) / 100;

    // Display the calculated simple interest
    printf("Simple interest = %d", int_amt);

    return 0;
}


