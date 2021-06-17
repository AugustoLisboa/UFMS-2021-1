#include <stdio.h>
#include <string.h>
int main (void){
    int i,j=0,k=0,tempi=0,tempj,matricula,hora,check=0;
    char operator[21];
    float valext[11],salario;
    //Dicionario: Matricula p/ conectiva
    //Quantidade de horas e data da hora
    typedef struct{
        int mat;
        int dia;
        int mes;
        int hora;
    }regextras;

    //Dicionario: Endereço
    typedef struct{
        char rua[100];
        int numero;
        char bairro[61];
        char cidade[61];
        char estado[3];
        char cep[15];
    }regend;

    //Dicionario: Cadastro Geral Funcionario

    typedef struct{
        int mat;
        char nome[21];
        char sobrenome[81];
        int idade;
        regend ender;
        regextras extra [20];
        float salario;
        int check;
    }regcadastro;
    regcadastro cadastro[10];

    for(i=0;i<=11;i++){
        scanf(" %f",&valext[i]);
    }
    i=0;
    do{
        scanf(" %s",operator);
        if(strcmp(operator,"cad_func")==0){
            scanf(" %d",&cadastro[i].mat);
            scanf(" %s",&cadastro[i].nome[21]);
            scanf(" %s",&cadastro[i].sobrenome[81]);
            scanf(" %d",&cadastro[i].idade);
            scanf(" %s",&cadastro[i].ender.rua[100]);
            scanf(" %d",&cadastro[i].ender.numero);
            scanf(" %s",&cadastro[i].ender.bairro[61]);
            scanf(" %s",&cadastro[i].ender.cidade[61]);
            scanf(" %s",&cadastro[i].ender.estado[3]);
            scanf(" %s",&cadastro[i].ender.cep[15]);
            i++;
        }
        else if(strcmp(operator,"cad_ficha")==0){
            scanf(" %d",&matricula);
            for(tempi=i-1;tempi>=0;tempi--){
                if(matricula==cadastro[tempi].mat){
                    do{
                        cadastro[i].extra[j].mat=matricula;
                        scanf(" %d",&cadastro[i].extra[j].dia);
                        scanf(" %d",&cadastro[i].extra[j].mes);
                        scanf(" %d",&hora);
                        cadastro[i].extra[j].hora=hora;
                        j++;
                    }while(hora!=0);
                    for(tempj=j-1;tempj<=0;tempj--){
                        cadastro[i].salario=cadastro[i].salario+(cadastro[i].extra[tempj].hora*valext[(cadastro[i].extra[tempj].mes)-1]);
                    }
                    cadastro[i].check=1;
                }
            }

        }
        else if(strcmp(operator,"rel_geral")==0){
            scanf(" %d",&matricula);
            for (tempi=i;tempi>=0;tempi--){
                if(matricula=cadastro[tempi].mat){
                    printf("%s %s - %s %s - R$ %0.2f",
                    cadastro[tempi].nome,
                    cadastro[tempi].sobrenome,
                    cadastro[tempi].ender.cidade,
                    cadastro[tempi].ender.estado,
                    cadastro[tempi].salario);
                }
                else if(matricula!=cadastro[tempi].mat){
                    check++;
                }
            }
            if(check==i){
                printf("Funcionário não cadastrado.");
            }
        }
        else if(strcmp(operator,"rel_cuncm")==0){
            for (tempi=i;tempi>=0;tempi--){
                if(cadastro[tempi].check=1){
                    printf("%s %s",cadastro[tempi].nome,cadastro[tempi].sobrenome);   
                }
            }
        }
    }while(strcmp(operator,"sair")==0);
}