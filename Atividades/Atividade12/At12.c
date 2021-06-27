#include <stdio.h>
#include <string.h>
int main (void){
    int i=0,j=0,k=0,tempi=0,tempj,matricula,hora,check=0,mes;
    char operator[21];
    float valext[11],salario;
    //Dicionario: Matricula p/ conectiva
    //Quantidade de horas e data da hora
    typedef struct{
        int mat;
        int dia;
        int mes;
        int hora;
        int check2;
    }regextras;

    //Dicionario: Endereço
    typedef struct{
        char rua[100];
        int numero;
        char bairro[61];
        char cidade[61];
        char estado[3];
        char cep[15];
    }regender;

    //Dicionario: Cadastro Geral Funcionario

    typedef struct{
        int mat;
        char nome[61];
        char sobrenome[81];
        int idade;
        regender ender;
        regextras extra [20];
        float salario;
        int check;
    }regcadastro;
    regcadastro cadastro[10];

    for(i=0;i<12;i++){
        scanf(" %f",&valext[i]);
    }
    i=0;
    do{
        scanf(" %s ",operator);
        if(strcmp(operator,"cad_func")==0){
            scanf(" %d ",&cadastro[i].mat);
            scanf("%s ",cadastro[i].nome);
            scanf("%[^\n]%*c",cadastro[i].sobrenome);
            scanf(" %d ",&cadastro[i].idade);
            scanf("%[^\n]%*c",cadastro[i].ender.rua);
            scanf(" %d ",&cadastro[i].ender.numero);
            scanf("%[^\n]%*c",cadastro[i].ender.bairro);
            scanf("%[^\n]%*c",cadastro[i].ender.cidade);
            scanf("%[^\n]%*c",cadastro[i].ender.estado);
            scanf("%[^\n]%*c",cadastro[i].ender.cep);
            i++;
        }
        else if(strcmp(operator,"cad_ficha")==0){
            scanf(" %d",&matricula);
            for(tempi=i-1;tempi>=0;tempi--){
                if(matricula==cadastro[tempi].mat){
                    do{
                        cadastro[tempi].extra[j].mat=matricula;
                        scanf(" %d",&hora);
                        scanf(" %d",&cadastro[tempi].extra[j].dia);
                        scanf(" %d",&cadastro[tempi].extra[j].mes);
                        cadastro[tempi].extra[j].hora=hora;
                        j++;
                    }while(hora!=0);
                    for(tempj=j-1;tempj>=0;tempj--){
                        cadastro[tempi].salario=cadastro[tempi].salario+(cadastro[tempi].extra[tempj].hora*valext[(cadastro[tempi].extra[tempj].mes)]);
                        cadastro[tempi].extra[tempj].check2=1;
                    }
                }
                cadastro[i].check=j;
                j=0;
            }

        }
        else if(strcmp(operator,"rel_geral")==0){
            scanf(" %d",&matricula);
            for (tempi=i;tempi>=0;tempi--){
                if(matricula==cadastro[tempi].mat){
                    printf("%s %s - %s %s - R$ %0.2f\n",
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
            if(check==i-1){
                printf("Funcionário não cadastrado.\n");
            }
        check=0;
        }
        else if(strcmp(operator,"rel_funcm")==0){
            scanf(" %d ",&mes);
            for (tempi=i-1;tempi<=0;tempi--){
                for(tempj=cadastro[tempi].check-1;tempj>=0;tempj--){
                    if(cadastro[tempi].extra[tempj].check2==1 && cadastro[tempi].extra[tempj].mes == mes){
                        printf("%s %s\n",cadastro[tempi].nome,cadastro[tempi].sobrenome);   
                    }
                }
            }
        }
        else if (strcmp(operator,"lista_func")==0){
            for (tempi=0;tempi<=i-1;tempi++){
                printf ("%s %s, %d anos\nRua: %s, Número %d, %s, %s, %s, CEP %s\n",cadastro[tempi].nome,
                cadastro[tempi].sobrenome,
                cadastro[tempi].idade,
                cadastro[tempi].ender.rua,
                cadastro[tempi].ender.numero,
                cadastro[tempi].ender.bairro,
                cadastro[tempi].ender.cidade,
                cadastro[tempi].ender.estado,
                cadastro[tempi].ender.cep);
            }
        }
    }while(strcmp(operator,"sair")!=0);
}
