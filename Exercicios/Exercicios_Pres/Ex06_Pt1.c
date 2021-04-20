#include <stdio.h>
int x,y;
int main(void){
    scanf("%d %d",&x,&y);
    if(x>=y && x%y==0){
        printf("%d e %d sao multiplos entre si",x,y);
    }
    else if(y>=x && y%x==0){
        printf("%d e %d sao multiplos entre si",x,y);
    }
    else{
        printf("%d e %d nao sao multiplos entre si",x,y);
    }
}