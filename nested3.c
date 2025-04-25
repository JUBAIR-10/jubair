#include <stdio.h>
int main(){
    
    printf("\n");
    for (int row = 1; row <= 5; row++){
        for (char ch = 'A'; ch <= 'Z'; ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
