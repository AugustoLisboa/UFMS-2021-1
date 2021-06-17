#include <stdio.h>
#include <string.h>

int main (void){
    int valext[11],i,k,j,temp,tempi;
    char operator[21];
    
    typedef struct{
       int matricula;
       int dia;
       int mes;
       int hora;
    }regficha;
    regficha ficha[200];
    typedef struct{
        char rua[100];
        int numero;
        char bairro[61];
        char cidade[61];
        char estado[3];
        int cep[9];
    }regend;

    typedef struct{
        int matricula;
        char nome[21];
        char sobrenome[81];
        int idade;
        regend ender;
    }regcadastro;
    regcadastro cadastro[10];

    for (i=0;i<=11;i++){
        scanf(" %f",&valext[i]);
    }
    i=0;
    j=0;
    k=0;
    do{
        scanf(" %s",operator);
        if(srtcmp(operator,"cad_func")==0){
            scanf(" %d",&cadastro[i].matricula);
            scanf(" %s",&cadastro[i].nome);
            scanf(" %s",&cadastro[i].sobrenome);
            scanf(" %d",&cadastro[i].idade);
            scanf(" %s",&cadastro[i].ender.rua);
            scanf(" %d",&cadastro[i].ender.numero);
            scanf(" %s",&cadastro[i].ender.bairro);
            scanf(" %s",&cadastro[i].ender.cidade);
            scanf(" %s",&cadastro[i].ender.estado);
            scanf(" %d",&cadastro[i].ender.cep);
            i++;
        }
        else if(srtcmp(operator,"cad_ficha")==0){
            scanf(" %d",&ficha[j].matricula);
            scanf(" %d",&ficha[j].dia);
            scanf(" %d",&ficha[j].mes);
            scanf(" %d",&ficha[j].hora);
            j++;
        }
        else if(srtcmp(operator,"rel_geral")==0){
            scanf(" %d",&temp);
            for (tempi=i;tempi>=0;tempi--){
                if(temp=cadastro[tempi].matricula){
                    printf("%s %s - %s %s - R$ %0.2f",
                    cadastro[tempi].nome,
                    cadastro[tempi].sobrenome,
                    cadastro[tempi].ender.cidade,
                    cadastro[tempi].ender.estado);
                    // COLOCAR O CALCULO DE VALOR EM R$
                }
                else if(temp=)
            }
        }
    }while(srtcmp(operator,"sair")==0);
}