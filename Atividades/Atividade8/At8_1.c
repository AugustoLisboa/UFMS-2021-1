#include <stdio.h>
int main (void){
  //se o numero entrar no terceiro vetor atribuir -1 ao numero, executar algo somente se o numero for diferente de -1
    int tam1,tam2,tamf,i,j,h=0,leitor1[15],leitor2[15],final[15],inter;
    do{
        for (i=0;i<=15;i++){
            leitor1[i]=99999999;
            leitor2[i]=99999999;
        }
        scanf ("%d",&tam1);
        if(tam1!=51){
            for (i=0;i<=tam1-1;i++){
                scanf(" %d",&leitor1[i]);
            }
            scanf("%d",&tam2);
            for(j=0;j<=tam2-1;j++){
                scanf(" %d",&leitor2[j]);
            }
            if(leitor1[0]>leitor1[1]){
                for(i=tam1-1;i>=(tam1)/2;i--){
                    inter=leitor1[i];
                    leitor1[i]=leitor1[h];
                    leitor1[h]=inter;
                    h++;
                }
            }
            h=0;
            if(leitor2[0]>leitor2[1]){
                for(i=tam2-1;i>=(tam2)/2;i--){
                    inter=leitor2[i];
                    leitor2[i]=leitor2[h];
                    leitor2[h]=inter;
                    h++;
                }
            }
            tamf=tam1+tam2;
            i=0;
            j=0;
            for (h=0;h<=tamf;h++){
                if(leitor1[i]<leitor2[j] ){
                    final[h]=leitor1[i];
                    i++;
                }
                else{
                    final[h]=leitor2[j];
                    j++;
                }
            }
            for(h=0;h<=tamf-1;h++){
                printf("%d ",final[h]);
            }
            printf("\n"); 
        }
    }while (tam1!=51);
}
