#include <stdio.h>
int main (void){
    int leitor, vetorA[8],vetorB[8],vetorC[8],i=0,k=0,j=0,h=0,tamA=0,tamB=0,tamC=0,inter,vetorF[8];
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
        for(k=0;k<=8;k++){
            if(vetorA[i]<vetorB[j] && vetorA[i]<vetorC[h] && vetorA[i]!=-1){
                vetorF[k]=vetorA[i];
                printf("\n%d",vetorA[i]);
                i++;
            }
            else if (vetorB[j]<vetorA[i] && vetorB[j]<vetorC[h] && vetorB[j]!=-1){
                vetorF[k]=vetorB[j];
                printf("\n%d",vetorB[j]);
                j++;
            }
            else if(vetorC[h]<vetorA[i] && vetorC[h]<vetorB[j] && vetorC[h]!=-1){
                vetorF[k]=vetorC[h];
                printf("\n%d",vetorC[h]);
                h++;
            }
            printf("%d ",vetorF[k]);
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
        i++;
    }while(leitor!=-2);
}