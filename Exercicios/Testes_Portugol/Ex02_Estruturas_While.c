#include <stdio.h>
int x,y,soma;
int main (void){
    scanf("%d %d",&x,&y);
    soma=x;
    while (y>1 ){
        soma=soma*x;
        y=y-1;
    }
    printf("%d",soma);
}

