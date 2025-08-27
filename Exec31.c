#include <stdio.h>

int main(){

    // declaração de variáveis
    float custo_fabrica, custo_consumidor;

    // entrada de dados
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    // processamento de dados
    custo_consumidor = custo_fabrica + (custo_fabrica * 0.45);
    custo_consumidor = custo_consumidor + (custo_consumidor * 0.28);

    // saída de dados
    printf("o custo ao consumidor e: R$ %.2f\n", custo_consumidor);



    
    return 0;
}
