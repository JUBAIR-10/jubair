#include <stdio.h>

int main()
{
    int i, j;
    printf(" enter the integer  number: ");

    scanf("%d", &j);
    printf("\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", i, j, i * j);
    }
}
