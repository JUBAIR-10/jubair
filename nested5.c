#include <stdio.h>
int main()
{
    int row, colom;
    printf("\n");
    for (row =1; row <=10; row++)
    {
        for (colom =20; colom>=1; colom--)
        {
            printf("%d",colom);
        }
        printf("\n");
    }
    return 0;
}