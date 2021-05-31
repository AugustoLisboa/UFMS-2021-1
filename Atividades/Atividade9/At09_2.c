#include <stdio.h>
#include <string.h>
int main(void){
    int leitor,vetor[10],i,g=0,num,conf;
    char func[8];
    for(i=0;i<=0;i++){
        vetor[i]=-1;
    }
    for(i=0;i<=10;i++){
        scanf(" %d",&leitor);
        if(leitor!=-1){
            vetor[g]=leitor;
            g++;
        }
        else{
            break;
        }
        conf=g;

    }
    g--;
    for (i=0;i<=9;i++){
        scanf("%s",func);
        if(strcmp(func,"fim")!=0){        
            if(strcmp(func,"insira")==0){
                scanf(" %d",&num);
                for (g;g>=0;g--){
                    vetor[g+1]=vetor[g];
                }
                vetor[0]=num;
                conf++;
            }
            else{
                if(strcmp(func,"imprima")==0){
                    if(conf>=10){
                        for(g=0;g<10;g++){
                            printf("%d ",vetor[g]);
                        }
                    }
                    else{
                        for(g=0;g<=conf-1;g++){
                            printf("%d ",vetor[g]);
                        }
                    }
                    printf("\n");
                }
                else{
                    if(strcmp(func,"remova")==0){
                        scanf(" %d",&num);
                        g=num;
                        for(num;num<=conf-1;num++){
                            vetor[num]=vetor[num+1];
                        }
                        conf--;
                    }
                }
            }
        }
        else{
            break;
        }

    }
}