#include <stdio.h>
int main (void){
    int leitor, vetorA[8],vetorB[8],vetorC[8],i=0,k=0,j=0,h=0,tamA=0,tamB=0,tamC=0,inter,vetorF[8],cont=0;
    do{
        for (i=0;i<=8;i++){
            vetorA[i]=-1;
            vetorB[i]=-1;
            vetorC[i]=-1;
        }
        i=0;
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetorA[i]=leitor;
                tamA=tamA+1;
                i=i+1;
            }
            if(vetorA[0]>vetorA[1]){
                for(i=tamA;i<=0;i--){
                    inter=vetorA[i];
                    vetorA[i]=vetorA[h];
                    h=h+1;
                }
            }
            h=0;
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
        if(vetorB[0]>vetorB[1]){
                for(i=tamB;i<=0;i--){
                    inter=vetorB[i];
                    vetorB[i]=vetorB[h];
                    h=h+1;
                }
            }
        h=0;
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
        if(vetorC[0]>vetorC[1]){
                for(i=tamC;i<=0;i--){
                    inter=vetorC[i];
                    vetorC[i]=vetorC[h];
                    h=h+1;
                }
            }
        i=0;
        j=0;
        h=0;
        for (i=0;i<=tamA+tamB;i++){
            if(vetorA[j]==vetorB[k]){
                if(vetorA[j]!=vetorF[i]){
                    vetorF[i]=vetorA[j];
                    j++;
                    k++;
                    cont++;
                }
            }
            else if(vetorA[j]>vetorB[k]){
                 vetorF[i]=vetorA[j];
                 j++;
                 cont++;
            }
            else{
                vetorF[i]=vetorB[k];
                k++;
                cont++;
            }

        }
        for (i=0;i<=cont;i++){
            printf ("%d",vetorF[i]);
        }
    }while(leitor!=-2);
}