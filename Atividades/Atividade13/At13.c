#include <stdio.h>
#include <string.h>
//Módulos a Definir:
//Buscas, cad_func, del_func, cad_ficha, del_horas, lista_func, lista_horas

//Proto Cad_func
int chama_op();
void cad_func();
int busca_mat();
void del_func();
void lista_func();
void cad_ficha();


typedef struct{
    int dia;
    int mes;
    int hora;
}ficha;

typedef struct{
    int matricula;
    char nome[21];
    char sobre[51];
    int idade;
    char rua[101];
    int numero;
    char bairro[51];
    char cidade[51];
    char estado[6];
    char cep[11];
    ficha fic[20];
    }cadastro;

int main (void){
    int i=0,tempi,mat,checkmat,op=10;
    cadastro cad[10];
    for (i=0;i<=9;i++){
        cad[i].matricula=404;
    }
    i=0;
    do{
        op=chama_op();
        switch (op){
        case 1:
            cad_func(cad,i);
            break;
        
        case 2:
            del_func;
            break;
        
        case 3:
            cad_ficha(fic,cad);
            break;
        case 5:
            lista_func(cad);
            break;
        }
    }while (op!=0);
}
//completo
void cad_func(cadastro cad[],int i){
    int mat,checkmat;
    scanf("%d",&mat);
    checkmat=busca_mat(cad,mat);
    if(checkmat == 10){
        cad[i].matricula=mat;
        scanf(" %[^\n]%*c",cad[i].nome);
        scanf(" %[^\n]%*c",cad[i].sobre);
        scanf(" %d ",&cad[i].idade);
        scanf("%[^\n]%*c",cad[i].rua);
        scanf(" %d ",&cad[i].numero);
        scanf(" %[^\n]%*c",cad[i].bairro);
        scanf(" %[^\n]%*c",cad[i].cidade);
        scanf(" %[^\n]%*c",cad[i].estado);
        scanf(" %[^\n]%*c",cad[i].cep);
        i++;
    }
    else if(checkmat<=9){
        printf("O número de matrícula informado já existe.\n");
    }
    else{
        printf("Não é possível cadastrar um novo funcionário. O cadastro está cheio.\n");
    }
    checkmat=0;
}

//completo 
int busca_mat(cadastro cad[], int mat){
    int tempi,checkmat=0,testenull=0;
    for (tempi = 0;tempi<=9;tempi++){
        if (cad[tempi].matricula==mat){
            checkmat=tempi;
            break;
        }
        else{
            checkmat=10;
        }

        if(cad[tempi].matricula==404){
            testenull++;
        }

        if(testenull == 9){
            checkmat = 404;
        }
        return checkmat;
    }
}

//completo
int chama_op(){
    char op[21];
    int seletor;
    scanf(" %[^\n]%*c ",op);
    if(strcmp(op,"cad_func")==0){
        seletor=1;
    }
    else if(strcmp(op,"del_func")==0){
        seletor=2;
    }
    else if(strcmp(op,"cad_ficha")==0){
        seletor=3;
    }
    else if(strcmp(op,"del_horas")==0){
        seletor=4;
    }
    else if(strcmp(op,"lista_func")==0){
        seletor=5;
    }
    else if(strcmp(op,"lista_horas")==0){
        seletor=6;
    }
    else {
        seletor=0;
    }
    return seletor;
}

//incompleto, corrigir
void del_func(cadastro cad[]){
    int tempi,mat;
    scanf(" %d",&mat);
    tempi=busca_mat(cad,mat);
    if(tempi=404){
        printf("Não há funcionários para remover.\n");
    }
    else if(tempi=10){
        printf("O número de matrícula informado não está cadastrado.\n");
    }
    else if (tempi<=9 && tempi>=0){
        cad[tempi].matricula=404;
       // cad[tempi].nome[21]="\0";
       // cad[tempi].sobre[51]="\0";
        cad[tempi].idade=404;
        //cad[tempi].rua[101]="\0";
        cad[tempi].numero=404;
        //cad[tempi].bairro[51]="\0";
        //cad[tempi].cidade[51]="\0";
        //cad[tempi].estado[6]="\0";
        //cad[tempi].cep[11]="\0";
    }
}

//completo
void lista_func(cadastro cad[]){
    int tempi;
    for (tempi=0;tempi<=9;tempi++){
        if(cad[tempi].matricula != 404){
            printf("%s%s\n",cad[tempi].nome,cad[tempi].sobre);
            printf("Rua %s Número %d %s %s %s, CEP %s",cad[tempi].rua,cad[tempi].numero,cad[tempi].bairro,cad[tempi].cidade,cad[tempi].estado,cad[tempi].cep);
        }
    }
}

void cad_ficha (ficha fic[],cadastro cad[]){
    int mat,check,j=0;
    scanf("%d",&mat);
    check=busca_mat(cad,mat);
    if(check<=9){
        do{
            scanf(" %d ",&cad[check].fic[j].dia);
            if(cad[check].fic[j].dia!=0){
                scanf(" %d ",&cad[check].fic[j].mes);
                scanf(" %d ",&cad[check].fic[j].hora);
                j++;
            }
        }while(cad[check].fic[j].dia!=0);
    }
    else if(check == 10){
        printf("Não é possível cadastrar uma nova ficha de horas extras. O cadastro está cheio.\n");
    }

}
/*cad_func
159 
Augusto 
Pereira Dias Lisboa
27
Angico
373
Novo Oeste
Tres Lagoas
MS
79621-140
cad_func
123
Dio
Brando
999
Egipto
000
ZA
WARUDO
DI
7896-14*/
-0_