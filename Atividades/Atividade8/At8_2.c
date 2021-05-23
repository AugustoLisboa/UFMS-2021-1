#include <stdio.h>
int main (void){
    int leitor, vetorA[8],vetorB[8],vetorC[8],i=0,j=0,h=0,tamA=0,tamB=0,tamC=0;
    do{
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetorA[i]=leitor;
                tamA=tamA+1;
                i=i+1;
            }
        }
        i=0;
        leitor=0;
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetorB[i]=leitor;
                tamB=tamB+1;
                i=i+1;
            }
        }
        i=0;
        leitor=0;
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetorC[i]=leitor;
                tamC=tamC+1;
                i=i+1;
            }
        }
        for (i=0;i<=tamA;i++){
            for (j=0;j<=tamB;j++){
                for(h=0;h<=tamC;h++){
                    if (vetorC[h]==vetorB[j] && vetorB[j]==vetorA[i] && vetorA[i]>=0 ){
                        printf("%d ",vetorA[i]);
                    }
                }
            }
        }
        leitor=0;
        printf("\n");
        for (i=0;i<=8;i++){
            vetorA[i]=-1;
            vetorB[i]=-1;
            vetorC[i]=-1;
        }
        i=0;
        scanf(" %d",&leitor);
        vetorA[i]=leitor;
    }while(leitor!=-2);
}