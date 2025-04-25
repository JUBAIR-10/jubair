#include<stdio.h>
int main(){
int row,colom;
printf("\n");
for(row=1;row<=10;row++){
    for(colom=1;colom<=row;colom++){
        printf("*" );
    }
    printf("\n");
}

return 0;
}