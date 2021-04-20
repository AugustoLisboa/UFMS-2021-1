#include <stdio.h>
int x,y;
int main(void){
    scanf("%d %d",&x,&y);
    if((x%2!=0 && y%2!=0)||(x%2==0 && y%2==0)){
        printf("branco");
    }
    else {
        printf("preto");
    }
}