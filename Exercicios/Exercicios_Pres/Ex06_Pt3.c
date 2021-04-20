#include <stdio.h>
int saida,dur,fuso,chegada;
int main (void){
    scanf("%d %d %d",&saida,&dur,&fuso);
    if(saida+fuso<=12){
        chegada=saida+dur+fuso;
    }
    else{
        chegada=saida+dur+fuso-24;
    }
    if(chegada == 24 ){
        chegada = 0;
    }
    printf("%d",chegada);
}