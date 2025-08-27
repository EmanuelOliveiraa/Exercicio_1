#include <stdio.h>

int main(){
    // declaração de variáveis
    float salario, novo_salario;

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // processamento de dados
    novo_salario = salario + (salario * 0.37);

    // saída de dados
    printf("o novo salario com aumento de 37%% e: R$ %.2f\n", novo_salario);
    return 0;
}
