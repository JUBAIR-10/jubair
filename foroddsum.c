#include <stdio.h>
int main() {
    int i, sum = 0;
    printf("\nodd numbers from 50 to 100:\n");
    
    for (i = 50; i<= 100; i++) {
        if (i% 2 != 0) {  
            printf("%d ", i);
            sum +=i;
        }
    }
    printf("\n Sum of odd numbers: %d", sum);
    return 0;
}