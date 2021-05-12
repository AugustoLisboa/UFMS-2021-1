#include <stdio.h>
int leitor=1,inter,cont,bin,soma,n,leitor2,bin2;
int main(void){
    while(leitor!=0){
        bin=0;
        n=1;
        scanf("%d",&leitor);
        inter=leitor;
        while (leitor>0){
            bin=(bin*10)+(leitor%2);
            leitor=leitor/2;
            cont=cont+1;
        }
        while(cont>0){
            cont=cont-1;
            soma=(soma*10)+(bin%2);
            bin=(bin-(bin%2))/10;
        }
        scanf("%d",&leitor2);
        inter=leitor;
        while (leitor>0){
            bin2=(bin2*10)+(leitor2%2);
            leitor2=leitor2/2;
            cont=cont+1;
        }
        while(cont>0){
            cont=cont-1;
            soma=(soma*10)+(bin%2);
            bin2=(bin2-(bin2%2))/10;
        }
    }
    printf("%d",soma);
}