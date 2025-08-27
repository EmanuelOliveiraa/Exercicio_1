#include <stdio.h>
#include <math.h>



int main(){

    // declaração de variáveis
    float aplicacao, taxa, valor_acumulado;
    int meses;

    // entrada de dados
    printf("Digite o valor da aplicacao mensal: ");
    scanf("%f", &aplicacao);
    printf("Digite a taxa (em decimal, ex: 0.02 para 2%%): ");
    scanf("%f", &taxa);
    printf("Digite o numero de meses: ");
    scanf("%d", &meses);

    // processamento de dados
    valor_acumulado = (aplicacao * (pow(1 + taxa, meses) - 1)) / taxa;

    // saída de dados
    printf("O valor acumulado sera: R$ %.2f\n", valor_acumulado);


    
    return 0;
}
