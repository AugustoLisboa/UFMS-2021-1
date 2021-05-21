#include <stdio.h>
int main (void){
  //se o numero entrar no terceiro vetor atribuir -1 ao numero, executar algo somente se o numero for diferente de -1
    int tam1,tam2,i,j,h=0,leitor1[15],leitor2[15],final[15];
    do{
        scanf(" %d",&tam1);
        if(tam1!=51){
            for(i=0;i<=tam1-1;i++){
                scanf(" %d",&leitor1[i]);
            }
            scanf(" %d",&tam2);
            for(j=0;j<=tam2-1;j++){
                scanf(" %d",&leitor2[j]);
            }

            for(i=0;i<=tam1-1;i++){
                for(j=0;j<=tam2-1;j++){
                    if(leitor1[i]!=-1 && leitor2[j]!=1){
                        if(leitor1[i]<leitor2[j]){
                            final[h]=leitor1[i];
                            h++;
                            leitor1[i]=-1;
                        }
                        else{
                            final[h]=leitor2[j];
                            h++;
                            leitor2[j]=-1;
                        }
                    }
                }
            }
            for (h=0;h<=(tam1+tam2)-1;h++){
                printf("%d ",final[h]);

            }
        }

    }while (tam1!=51);
}
