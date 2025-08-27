#include <stdio.h>

int main(){

    // declaração de variaveis
    float tempo, velocidade, distancia, litros;

    // entrada de dados
    printf("Digite o tempo gasto: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade media: ");
    scanf("%f", &velocidade);

    //processamento de dados
    distancia = tempo * velocidade;
    litros = distancia / 12;

    //saida de dados
    printf("Distancia percorrida: %.2f \n", distancia);
    printf("Quantidade de combustivel gasto: %.2f \n", litros);

    return 0;
}
