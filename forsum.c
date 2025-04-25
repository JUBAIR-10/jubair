#include <stdio.h>

int main(){
    int i, sum = 0;

    printf("The first 500 natural number :\n");
    for (i = 300; i <= 500; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }

    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
