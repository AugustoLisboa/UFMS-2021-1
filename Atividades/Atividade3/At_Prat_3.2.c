#include <stdio.h>
int y,x1,x2,y2,xp,hp,h,l;
int main (void){
    scanf("%d %d %d %d %d %d",&x1,&y,&x2,&y2,&xp,&hp);
    if(y>0){
        y=-y;
    }
    if(x1>0){
        x1=-x1;
    }
    if(x2>0){
        x2=-x2;
    }
    if(y2>0){
        y2=-y2;
    }
    if(xp>0){
        xp=-xp;
    }
    if(hp>0){
        hp=-hp;
    }
    if((xp>=x1 && xp<=x2) && (hp>=y && hp<=y2)){
        printf("interno");

    }
    else{
        printf("externo");
    }
}