#include <stdio.h>

int main(){



    // declaração de variáveis
    float valor, novo_valor;

    // entrada de dados
    printf("digite o valor do produto: ");
    scanf("%f", &valor);


    
    // processamento de dados
    novo_valor = valor - (valor * 0.09);

    // saída de dados
    printf("o novo valor com desconto de 9%% e: R$ %.2f\n", novo_valor);


    return 0;
}
