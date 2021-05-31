#include <stdio.h>
int main (void){
    int tamanho[3],leitor=0,vetor1[8],vetor2[8],vetor3[8],vetor[24],contador[3],i=0,g=0,j=0,h=0,teste=0,corr=0;
    do{
        if(corr==0){
            for(g=0;g<=2;g++){
                tamanho[g]=0;
                contador[g]=0;
            }
        }
        g=0;
        while(leitor!=-1){
            scanf(" %d",&leitor);
            if(leitor!=-1){
                vetor1[i]=leitor;
                tamanho[0]++;
                i++;
            }
        }
        leitor=0;
        i=0;
        while(leitor!=-1){
            scanf(" %d",&leitor);
            if(leitor!=-1){
                vetor2[i]=leitor;
                tamanho[1]++;
                i++;
            }
        }
        leitor=0;
        i=0;
        while(leitor!=-1){
            scanf(" %d",&leitor);
            if(leitor!=-1){
                vetor3[i]=leitor;
                tamanho[2]++;
                i++;
            }
        }
        teste=0;
        for(g=0;g<=tamanho[0];g++){
            for(h=0;h<=tamanho[1];h++){
                for(j=0;j<=tamanho[2];j++){
                    if(vetor1[g]==vetor2[h] && vetor1[g]==vetor3[j]){
                        printf("%d ",vetor1[g]);
                        teste++;
                    }
                }
            }
        }
        if(teste>0){
            printf("\n");
        }
        teste=0;
        for(i=0;i<=tamanho[0]-1;i++){
            vetor[i]=vetor1[i];
        }
       for(g=0;g<=tamanho[1]-1;g++){     
            for(h=0;h<=tamanho[0]-1;h++){

                if(vetor[h]==vetor2[g]){
                    teste++;
                }
            }
            if(teste==0){
                vetor[i]=vetor2[g];
                tamanho[0]++;
                i++;
            }
        
        teste=0;
       }
       teste=0;
       for(g=0;g<=tamanho[2]-1;g++){     
            for(h=0;h<=tamanho[0]-1;h++){
                if(vetor[h]==vetor3[g]){
                    teste++;
                }
            }
            if(teste==0){
                vetor[i]=vetor3[g];
                tamanho[0]++;
                i++;

            }
            teste=0;
       }
        for(i=0;i<=tamanho[0]-1;i++){
            printf("%d ",vetor[i]);
        }
        printf("\n");

        
        i=0;
        g=0;
        j=0;
        h=0;
        teste=0;

        tamanho[0]=0;
        tamanho[1]=0;
        tamanho[2]=0;
        scanf(" %d",&leitor);
        if(leitor!=-2){
            vetor1[0]=leitor;
            i++;
            tamanho[0]++;
        }
        corr++;
    }while(leitor!=-2);
} 