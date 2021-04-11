#include <stdio.h>
int valor,selo3,selo5,resto;
int main(void){
    scanf("%d",&valor);
    if(valor%5==1){
        selo5=(valor/5)-1;
        selo3=2;
    }
    else if(valor%5==2){
        selo5=(valor%5)-2;
        selo3=4;
    }
    else if(valor%5==3){
        selo5=(valor/5);
        selo3=1;
    }
    else if(valor%5==4){
        selo5=(valor/5)-1;
        selo3=3;
    }
    else if(valor%5==0){
        selo5=(valor/5);
        selo3=0;
    }
    printf("%d %d",selo3,selo5);
}