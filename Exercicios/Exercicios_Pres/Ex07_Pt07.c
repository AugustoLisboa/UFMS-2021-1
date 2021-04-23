#include <stdio.h>
int angH,angM,h,m;
int main(void){
    
    scanf("%d %d",&angH,&angM);    
    h=angH/30;
    m=angM/6;
    printf("%dh%dm",h,m);
}