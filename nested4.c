#include <stdio.h>
int main()
{
    int row, colom;
    printf("\n");
    for (row = 1; row <= 9; row++)
    {
        for (colom = 1; colom <= 20; colom++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}