#include<stdio.h>
int main(){
int i=20,sum=0;
printf("\nprint 1 from 20=");
do{
    printf("%d\t",i);
    sum+=i;
i--;
} while (i>=0);
printf("\nsum=%d\n",sum);
return 0;

}