#include <stdio.h>
char nome[10];
int age;
float salario,salarioT;
int main(void){
    printf("Olá! Para iniciarmos me informe seu nome:\n");
    scanf("%s", nome);
    printf("Agora, sua idade:\n");
    scanf("%d",&age);
    printf("Por fim, informe seu salário bruto:\n");
    scanf("%f",&salario);
    salario=(salario+0.38*salario);
    salario=(salario+0.20*salario);
    salarioT=(salario-salario*0.15);
    printf("%s ,\n%d.\nSalario bruto reajustado: R$%f\nSalario Liquido: R$%f",nome,age,salario,salarioT);

}