#include <stdio.h>



int main(){

    // declaração de variáveis
    float distancia, velocidade, tempo, velocidadeMetros;

    // entrada de dados
    printf("Digite a distancia em Km: ");
    scanf("%f", &distancia);
    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &velocidade);


    
    // processamento de dados
    tempo = distancia / velocidade;
    velocidadeMetros = (velocidade * 1000) / 3600;

    // saída de dados
    printf("o tempo medio de viagem sera: %.2f horas\n", tempo);
    printf("a velocidade em m/s e: %.2f\n", velocidadeMetros);

    return 0;
}
