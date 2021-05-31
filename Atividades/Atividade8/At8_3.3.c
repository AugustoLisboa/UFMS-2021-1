#include <stdio.h>
int main (void){
    int leitor=0,vetor1[24],vetor2[15],vetor3[15],vetor4[24],vetor5[24],i=0,j=0,k=0,n=0,h=0,tam1=0,tam2=0,tam3=0,tam=0,cont=0,inter;
    do{
        for (i=0;i<=15;i++){
            vetor1[i]=999;
            vetor2[i]=999;
            vetor3[i]=999;
            vetor4[i]=999;
        }
        i=0;
        leitor=0;
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetor1[i]=leitor;
                tam1=tam1+1;
                i=i+1;
            }
        }
        if(vetor1[0]>vetor1[1]){
                for(i=tam1-1;i>=tam1/2;i--){
                    inter=vetor1[i];
                    vetor1[i]=vetor1[h];
                    vetor1[h]=inter;
                    h=h+1;
                }
            }
        h=0;
        i=0;
        leitor=0;
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetor2[i]=leitor;
                tam2=tam2+1;
                i=i+1;
            }
        }
        if(vetor2[0]>vetor2[1]){
            for(i=tam2-1;i>=tam2/2;i--){
                inter=vetor2[i];
                vetor2[i]=vetor2[h];
                vetor2[h]=inter;
                h=h+1;
            }
        }
        h=0;
        i=0;
        leitor=0;
        while(leitor!=-1 && leitor!=-2){
            scanf(" %d",&leitor);
            if(leitor!=-1 && leitor!=-2){
                vetor3[i]=leitor;
                tam3=tam3+1;
                i=i+1;
            }
        }
        if(vetor3[0]>vetor3[1]){
            for(i=tam3-1;i>=tam3/2;i--){
                inter=vetor3[i];
                vetor3[i]=vetor3[h];
                vetor3[h]=inter;
                h=h+1;
            }
        }
        j=0;
        h=0;
        for(i=0;i<=tam1+tam2;i++){
            if(vetor1[j]<vetor2[h] && vetor1[j]!=999){
                vetor4[i]=vetor1[j];
                j++;
                cont++;
            }
            else if(vetor2[h]<vetor1[j] && vetor2[h]!=999){
                vetor4[i]=vetor2[h];
                h++;
                cont++;
            }
            else if(vetor1[j]==vetor2[h] && vetor1[j]!=999){
                vetor4[i]=vetor1[j];
                j++;
                h++;
                cont++;
            }
        }
        j=0;
        h=0;
        for(i=0;i<=24;i++){
            if(vetor4[j]<vetor3[h] && vetor4[j]!=999){
                vetor1[i]=vetor4[j];
                j++;
                cont++;
            }
            else if(vetor3[h]<vetor4[j] && vetor3[h]!=999){
                vetor1[i]=vetor3[h];
                h++;
                cont++;
            }
            else if(vetor4[j]==vetor3[h] && vetor4[j]!=999){
                vetor1[i]=vetor4[j];
                j++;
                h++;
                cont++;
            }
        }
        n=0;
        for( i = 0; i < tam1+tam2+tam3; i++){
            for( j = 0; j < n; j++ ){
                if( vetor1[i] == vetor5[j] ){
                    break;
                }
            }

            if( j == n ){
                vetor5[n] = vetor1[i];
                n++;
            }
        }
        for (i=0;i<8;i++){
            if(vetor1[0]==0){
            printf ("%d ",vetor5[i]);
            }
            else if(vetor1[i]!=0 && vetor1[i]!=999){
            printf ("%d ",vetor5[i]);
            }
        }
        printf("\n");
    }while(leitor!=-2);
}