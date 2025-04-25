#include <stdio.h>
int main()
{
    int n, sum = 0, i = 2;
    printf("Enter any number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i += 2;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}
