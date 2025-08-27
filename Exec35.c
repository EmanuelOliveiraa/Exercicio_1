#include <stdio.h>

int main(){
    // declaração de variáveis
    float peso, altura, imc;

    // entrada de dados
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    // processamento de dados
    imc = peso / (altura * altura);

    // saída de dados
    printf("O indice de massa corporea e: %.2f\n", imc);

    return 0;
}
