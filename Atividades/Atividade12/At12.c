#include <stdio.h>
#include <string.h>

int main (void){
    int i,k,j,temp,tempi,check=0,hora;
    char operator[21];
    float valext[11],salario;
    
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
        int cep;
    }regend;

    typedef struct{
        int matricula;
        char nome[21];
        char sobrenome[81];
        int idade;
        regend ender;
        float salario;
    }regcadastro;
    regcadastro cadastro[10];

    for (i=0;i<=10;i++){
        scanf(" %f",&valext[i]);
    }
    i=0;
    j=0;
    k=0;
    do{
        scanf(" %s",operator);
        if(strcmp(operator,"cad_func")==0){
            scanf(" %d",&cadastro[i].matricula);
            scanf(" %s",&cadastro[i].nome[21]);
            scanf(" %s",&cadastro[i].sobrenome[81]);
            scanf(" %d",&cadastro[i].idade);
            scanf(" %s",&cadastro[i].ender.rua[100]);
            scanf(" %d",&cadastro[i].ender.numero);
            scanf(" %s",&cadastro[i].ender.bairro[61]);
            scanf(" %s",&cadastro[i].ender.cidade[61]);
            scanf(" %s",&cadastro[i].ender.estado[3]);
            scanf(" %d",&cadastro[i].ender.cep);
            i++;
        }
        else if(strcmp(operator,"cad_ficha")==0){
            do{
                scanf(" %d",&ficha[j].matricula);
                scanf(" %d",&ficha[j].dia);
                scanf(" %d",&ficha[j].mes);
                scanf(" %d",&hora);
                ficha[j].hora=hora;
                j++;
                ficha[j].matricula=ficha[j-1].matricula;
                salario=salario+hora;
            }while(hora!=0);
        }
        j=0;
        else if(strcmp(operator,"rel_geral")==0){
            scanf(" %d",&temp);
            for (tempi=i;tempi>=0;tempi--){
                if(temp=cadastro[tempi].matricula){
                    printf("%s %s - %s %s - R$ %0.2f",
                    cadastro[tempi].nome,
                    cadastro[tempi].sobrenome,
                    cadastro[tempi].ender.cidade,
                    cadastro[tempi].ender.estado,
                    salario);

                    // COLOCAR O CALCULO DE VALOR EM R$
                }
                else if(temp!=cadastro[tempi].matricula){
                    check++;
                }
            }
            if(check==i){
                printf("Não existe");
            }
        }
        else if(strcmp(operator,"rel_cuncm")==0){
            for (tempi=i;tempi>=0;tempi--){
            
            }
        }
    }while(strcmp(operator,"sair")==0);
}