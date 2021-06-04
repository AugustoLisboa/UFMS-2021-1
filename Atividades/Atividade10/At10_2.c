#include <stdio.h>
#include <string.h>
int main (void){
    int matrizMN[15][15],cont,contx,contf,m,n,operator,ver=0,x;
    char select[8];
    scanf(" %d",&m);
    m--;
    n=m;

    for(cont=0;cont<=m;cont++){
        for(contx=0;contx<=n;contx++){
            scanf(" %d",&matrizMN[cont][contx]);
        }
    }
    do{
        scanf(" %s",select);
        if(strcmp(select,"imprime")==0){
            for(cont=0;cont<=m;cont++){
                for(contx=0;contx<=n;contx++){
                    printf("%d ",matrizMN[cont][contx]);

                }
                printf("\n");
            }
        }
        else if(strcmp(select,"at_v")==0){
            scanf(" %d",&m);
            scanf(" %d",&n);
            scanf(" %d",&operator);
            matrizMN[m][n]=operator;
        }
        else if(strcmp(select,"v_sim")==0){
            for (cont=0;cont<=m;cont++){
                for(contx=0;contx<=n;contx++){
                    if(cont==contx){
                        if(matrizMN[cont][contx]!=matrizMN[contx][cont]){
                            ver++;
                        }
                    }
                }
            }
            if(ver!=0){
                printf("não\n");
            }
            else{
                printf("sim\n");
            }
            ver=0;
        }
        else if(strcmp(select,"v_lat")==0){
            for(cont=0;cont<=m;cont++){
                for(contx=0;contx<=n;contx++){
                    for (x=0;x<=n;x++){
                        if(matrizMN[cont][x]==matrizMN[cont][contx]){
                            ver++;
                        }
                    }
                }
            }
            if(ver!=0){
                printf("não\n");
            }
            else{
                printf("sim\n");
            }
        }
    }while(strcmp(select,"fim")!=0);
}