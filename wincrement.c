#include<stdio.h>
int main(){

int i=0;
printf("\nprint 0 to 30:\n");
while(i<=30){
    printf("%d\t", i);
    i++;
}
printf("\n");
  i=30;
  printf("\nprint 30 to 0:\n");
  while (i>=0){
    printf("%d\t",i);
    i--;
  }

      return 0;
}