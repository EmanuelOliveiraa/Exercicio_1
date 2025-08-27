#include <stdio.h>



int main(){

    //declaração de variáveis
    int aptos;
    float diaria, diaria_promocional, total100, total70, perda;

    //entrada de dados
    printf("Digite o numero de apartamentos: ");
    scanf("%d", &aptos);
    printf("Digite o valor da diaria por apartamento: ");
    scanf("%f", &diaria);

    // processamento de dados
    diaria_promocional = diaria - (diaria * 0.25);
    total100 = diaria_promocional * aptos;
    total70 = diaria_promocional * (aptos * 0.7);
    perda = (diaria * aptos) - total100;

    // saída de dados
    printf("Valor promocional da diaria: R$ %.2f\n", diaria_promocional);
    printf("Valor total arrecadado (100%% ocupacao): R$ %.2f\n", total100);
    printf("Valor total arrecadado (70%% ocupacao): R$ %.2f\n", total70);
    printf("Valor que deixara de arrecadar: R$ %.2f\n", perda);

    return 0;
}
