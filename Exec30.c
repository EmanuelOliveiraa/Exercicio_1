#include <stdio.h>

int main(){

    // declaração de variáveis
    float custo, percentual, venda;

    // entrada de dados
    printf("Digite o preco de custo: ");
    scanf("%f", &custo);
    printf("Digite o percentual de acrescimo: ");
    scanf("%f", &percentual);


    
    // processamento de dados
    venda = custo + (custo * (percentual / 100));

    // saída de dados
    printf("o valor de venda e: R$ %.2f\n", venda);

    return 0;
}
