#include <stdio.h>
#include <string.h>

int main (void){
    int vetorMN[15][15],cont,contx,contf,read,m,n,operator,middle;
    char select[8];
    scanf(" %d",&m);
    scanf(" %d",&n);
    n=n-1;
    m=m-1;
    for (cont=0;cont<=m;cont++){
        for (contx=0;contx<=n;contx++){
                scanf(" %d",&vetorMN[cont][contx]);
        }
    }
    do{
        scanf(" %s",select);
        if(strcmp(select,"inv_l")==0){
            scanf(" %d",&operator);
            for (cont=0;cont<=n/2;cont++){
                middle=vetorMN[operator][cont];
                vetorMN[operator][cont]=vetorMN[operator][n-cont];
                vetorMN[operator][n-cont]=middle;
            }
        }
        else if(strcmp(select,"inv_c")==0){
            scanf(" %d",&operator);
            for (cont=0;cont<=m/2;cont++){
                middle=vetorMN[cont][operator];
                vetorMN[cont][operator]=vetorMN[m-cont][operator];
                vetorMN[m-cont][operator]=middle;
            }

        }
        else if (strcmp(select,"imprime")==0){
            for (cont=0;cont<=m;cont++){
                for (contx=0;contx<=n;contx++){
                    printf("%d ",vetorMN[cont][contx]);
                }
                printf("\n");
            }
        }
        else if (strcmp(select,"invl_se")==0){
            scanf(" %d",&operator);
            for (cont=0;cont<=m;cont++){
                for (contx=0;contx<=n;contx++){
                    if(operator==vetorMN[cont][contx]){
                        for (contf=0;contf<=n/2;contf++){
                            middle=vetorMN[cont][contf];
                            vetorMN[cont][contf]=vetorMN[cont][n-contf];
                            vetorMN[cont][n-contf]=middle;
                        }
                        break;
                    }
                }
            }
        }
        else if(strcmp(select,"invc_se")==0){
            scanf(" %d",&operator);
            for (contx=0;contx<=n;contx++){
                for (cont=0;cont<=m;cont++){
                    if(operator==vetorMN[cont][contx]){
                        for (contf=0;contf<=m/2;contf++){
                            middle=vetorMN[contf][contx];
                            vetorMN[contf][contx]=vetorMN[m-contf][contx];
                            vetorMN[m-contf][contx]=middle;
                        }
                        break;
                    }
                }
            }
        }
    }while (strcmp(select,"fim")!=0);
}