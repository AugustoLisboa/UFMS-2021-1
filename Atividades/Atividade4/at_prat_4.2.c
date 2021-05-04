#include <stdio.h>
int linhas,colunas,cont1,cont,num=0,par,sum=0,sum2=0,check;
int main(void){
    scanf("%d %d",&linhas,&colunas);
    for (cont=1;cont<=linhas;cont++){
        for(cont1=1;cont1<=colunas;cont1++){
            num=num+1;
            check=linhas%2;
            if(check!=0){
                if(cont==(linhas/2)+1){
                    sum=sum+num;
                }
            }
            else{
                check=(linhas/2)+1;
                if(cont==(linhas/2)+1){
                    sum=sum+num;
                }
                if(cont==linhas/2){
                    sum2=sum2+num;
                }
            }
            if(num%2==0){
                par=par+1;
            }
            printf("%d ",num);
        }
        printf("\n");
    }
    if(sum2!=0){
        printf("%d\n%d\n%d",sum,sum2,par);
    }
    else{
    printf("%d\n%d",sum,par); 
    }
}