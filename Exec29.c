#include <stdio.h>

int main(){



    // declaração de variáveis
    float valor, prestacao;

    // entrada de dados
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    
    // processamento de dados
    prestacao = valor / 5;

    // saída de dados
    printf("o valor de cada prestacao e: R$ %.2f\n", prestacao);



    return 0;
}
