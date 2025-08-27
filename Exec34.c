#include <stdio.h>


int main(){
    // declaração de variáveis
    float alturaDegrau, alturaTotal;
    int qtdDegraus;

    // entrada de dados
    printf("Digite a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("Digite a altura que deseja alcancar: ");
    scanf("%f", &alturaTotal);

    // processamento de dados
    qtdDegraus = alturaTotal / alturaDegrau;


    // saída de dados
    printf("Serao necessarios %d degraus\n", qtdDegraus);

    return 0;


}
