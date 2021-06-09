#include <stdio.h>
#include <string.h>
int main (void){
    int matrizMN[15][15],cont,contx,contf,m,n,na,operator,ver=0,x=0;
    char select[8];
    scanf(" %d",&m);
    m--;
    na=m;
    

    for(cont=0;cont<=m;cont++){
        for(contx=0;contx<=na;contx++){
            scanf(" %d",&matrizMN[cont][contx]);
        }
    }
    do{
        scanf(" %s",select);
        if(strcmp(select,"imprime")==0){
            for(cont=0;cont<=m;cont++){
                for(contx=0;contx<=na;contx++){
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
            ver=0;
            for (cont=0;cont<=m;cont++){
                for(contx=0;contx<=na;contx++){
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
            n=m+1;
            while (n!=0){
                x=x+n;
                n--;
            }
            ver=0;
            for(cont=0;cont<=m;cont++){
                for(contx=0;contx<=m;contx++){
                    n=n+matrizMN[cont][contx];
                    if(matrizMN[cont][contx]=matrizMN[cont][contx+1]){
                        ver++;
                    }
                }
                if(n!=x){
                    ver++;
                }
                n=0;
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