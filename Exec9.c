#include <stdio.h>

int main(){

    float salariofun,salariomin,salariofinal;
    printf("Escreva o salario do funcionario: \n");
    scanf("%f", &salariofun);
    printf("Escreva o salario minimo: \n");
    scanf("%f", &salariomin);
    salariofinal = salariofun/salariomin;
    printf("Funcionario ganha %.2f salarios minimos",salariofinal);




return 0;
}
