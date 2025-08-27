#include <stdio.h>



int main(){

    // declaração de variáveis
    float custo, preco_convite;
    int quatidade_min, quatidade_lucro;

    // entrada de dados
    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Digite o preco do convite: ");
    scanf("%f", &preco_convite);

    // processamento de dados
    quatidade_min = custo / preco_convite;
    quatidade_lucro = (custo * 1.23) / preco_convite;

    // saída de dados
    printf("Quantidade de convites para cobrir o custo: %d\n", quatidade_min);
    printf("Quantidade de convites para ter 23%% de lucro: %d\n", quatidade_lucro);



    
    return 0;
}
