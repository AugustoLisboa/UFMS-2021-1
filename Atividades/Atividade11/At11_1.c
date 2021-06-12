#include <stdio.h>
int main(void){
/*  1 2 3  00 01 02
    4 5 6  10 11 12
    7 8 9  20 21 22

    7 4 1  20 10 00
    8 5 2  21 11 01
    9 6 3  22 12 02
*/
int matriz[14][14],i,j,tam,middle,repeat;
    scanf(" %d",&tam);
    tam=tam-1;
    for (i=0;i<=tam;i++){
        for(j=0;j<=tam;j++){
            scanf(" %d",&matriz[i][j]);
        }
    }

    scanf(" %d",&repeat);
    do{
        for(i=0;i<=tam;i++){
            for(j=0;j<=tam;j++){
                if(i>j){
                    middle=matriz[i][j];
                    matriz[i][j]=matriz[j][i];
                    matriz[j][i]=middle;
                }
            }
        }
        for(i=0;i<=tam;i++){
            for(j=0;j<=tam/2;j++){
                middle=matriz[i][j];
                matriz[i][j]=matriz[i][tam-j];
                matriz[i][tam-j]=middle;
            }
        }
        repeat--;
    }while (repeat>0);
    for (i=0;i<=tam;i++){
        for(j=0;j<=tam;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}