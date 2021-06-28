#include <stdio.h>
#include <string.h>
//Módulos a Definir:
//Buscas, cad_func, del_func, cad_ficha, del_horas, lista_func, lista_ficha

//Proto Cad_func
int chama_op();
void cad_func();
int busca_mat();
void del_func();
void lista_func();
void cad_ficha();
void lista_ficha();


typedef struct{
    int dia[10];
    int mes[10];
    int hora[10];
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
    int i=0,tempi,mat,checkmat,op=10,posficha[10],ii=0;
    cadastro cad[10];
    ficha fic[20];
    for (ii=0;ii<=9;ii++){
        cad[ii].matricula=404;
    }
    for (ii=0;ii<=19;ii++){
       posficha[ii]=0;
    }
    do{
        op=chama_op();
        switch (op){
        case 1:
            cad_func(cad,i);
            i++;
            if(i>9){
                i--;
            }
            break;
        case 2:
            del_func(cad);
            break;
        
        case 3:
            cad_ficha(fic,cad,i,posficha);
            break;
        case 5:
            lista_func(cad,i);
            break;
        case 6:
            lista_ficha(cad,fic);
            break;
        }
    }while (op!=0);
}
//completo
void cad_func(cadastro cad[],int i){
    int mat,checkmat=0;
    scanf(" %d ",&mat);
    checkmat=busca_mat(cad,mat);
    if(checkmat == 404 && i<=9){
        cad[i].matricula=mat;
        scanf(" %s ",cad[i].nome);
        scanf(" %[^\n]%*c ",cad[i].sobre);
        scanf(" %d ",&cad[i].idade);
        scanf(" %[^\n]%*c ",cad[i].rua);
        scanf(" %d ",&cad[i].numero);
        scanf(" %[^\n]%*c ",cad[i].bairro);
        scanf(" %[^\n]%*c ",cad[i].cidade);
        scanf(" %[^\n]%*c ",cad[i].estado);
        scanf(" %[^\n]%*c ",cad[i].cep);
        i++;
    }
    else if(checkmat<=9){
        printf("O número de matrícula informado já existe.\n");
    }
    else{
        printf("Não é possível cadastrar um novo funcionário. O cadastro está cheio.\n");

    }
}

//completo 
int busca_mat(cadastro cad[], int mat){
    int tempi,checkmat=10,testenull=0;
    for (tempi=0;tempi<=9;tempi++){
        if (cad[tempi].matricula==mat){
            checkmat=tempi;
            break;
        }
        
        else if(cad[tempi].matricula==404){
            testenull++;
        }
        
    }
    if(testenull == 10){
            checkmat = 404;
    }
    return checkmat;
}

//completo
int chama_op(){
    char op[21];
    int seletor;
    scanf(" %[^\n]%*c",op);
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
    else if(strcmp(op,"lista_ficha")==0){
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
    scanf(" %d ",&mat);
    tempi=busca_mat(cad,mat);
    if(tempi==404){
        printf("Não há funcionários para remover.\n");
    }
    else if(tempi==10){
        printf("O número de matrícula informado não está cadastrado.\n");
    }
    else if (tempi<=9 && tempi>=0){
        cad[tempi].matricula=404;
    }
}

//completo
void lista_func(cadastro cad[],int i){
    int tempi,check=0;
    for (tempi=0;tempi<=i-1;tempi++){
        if(cad[tempi].matricula != 404){
            check=1;
            printf("%s %s, %d anos\n",cad[tempi].nome,cad[tempi].sobre,cad[tempi].idade);
            printf("Rua: %s, Número %d, %s, %s, %s, CEP %s\n",cad[tempi].rua,cad[tempi].numero,cad[tempi].bairro,cad[tempi].cidade,cad[tempi].estado,cad[tempi].cep);
        }
    }
    if(check=0){
        printf("Não há funcionários para remover.");
    }
}

//completo
void cad_ficha (ficha fic[],cadastro cad[],int i,int posficha[]){
    int mat,check,j=0,h=0;
    scanf("%d",&mat);
    check=busca_mat(cad,mat);
    if(check<=9){
        if(posficha[i]<=19){
            if(cad[check].fic[j].dia[h]<=9){
                do{
                    scanf(" %d ",&cad[check].fic[j].dia[h]);
                    if(cad[check].fic[j].dia[h]!=0){
                        scanf(" %d ",&cad[check].fic[j].mes[h]);
                        scanf(" %d ",&cad[check].fic[j].hora[h]);
                        posficha[i]++;
                        h++;
                    }
                }while(cad[check].fic[j].dia[h]!=0);
            }
            else{
                printf("Não é possível cadastrar mais horas extras. A ficha está cheia.\n");
                cad_ficha(fic,cad,i,posficha);
            }
        }
        else{
            printf("Não é possível cadastrar uma nova ficha de horas extras. O cadastro está cheio.\n");
            cad_ficha(fic,cad,i,posficha);
        }
    }
    else {
        printf("Não é possível cadastrar uma nova ficha de horas extras. O número de matrícula informado não existe.\n");
        cad_ficha(fic,cad,i,posficha);
    }  

}

void lista_ficha(cadastro cad[],ficha fic[]){
    int tempi,temph,tempj,h;
    for (tempi=0;tempi<=9;tempi++){
       
        if(cad[tempi].matricula!=404){
            printf("%s %s %d",cad[tempi].nome,cad[tempi].sobre,cad[tempi].matricula);
            
            for (tempj=0;tempj<=19;tempj++){
                do{
                    printf("%d/%d: %dh\n",cad[tempi].fic[tempj].dia[h],cad[tempi].fic[tempj].mes[h],cad[tempi].fic[tempj].hora[h]);
                    h++;
                }while(cad[tempi].fic[tempj].dia[h]!=0);
                h=0;
            }
        }
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
