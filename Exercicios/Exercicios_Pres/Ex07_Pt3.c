#include <stdio.h>
int valor,selo3,selo5,resto1,resto;
int main (void){
    scanf("%d",&valor);
    selo5=valor/5;
    resto=valor%5;
    switch(resto){
        case 1:
        selo5=(valor/5)-1;
        selo3=2;
        break;
        case 2:
        selo5=(valor%5)-2;
        selo3=4;
        break;
        case 3:
        selo5=(valor/5);
        selo3=1;
        break;
        case 4:
        selo5=(valor/5)-1;
        selo3=3;
        break;
        case 0:
        selo5=(valor/5);
        selo3=0;
        break;
    }
    printf("%d %d",selo3,selo5);
}