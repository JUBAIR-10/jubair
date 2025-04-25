#include <stdio.h>
int main()
{
    int i = 1;
    printf("square 1 from 15:\n");
    do
    {
        printf(" %d  = %d\n", i, i * i);
        i++;
    } while (i <= 15);
    return 0;
}
