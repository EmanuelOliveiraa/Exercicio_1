#include <stdio.h>

int main(){

    // declaração de variáveis
    int valor1, valor2, valor3, soma;
    float media;

    // entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // processamento de dados
    soma = valor1 + valor2 + valor3;
    media = soma / 3.0;


    
    // saída de dados
    printf("a media entre os valores e: %.2f\n", media);
    printf("o somatorio entre eles e: %d\n", soma);
    printf("o resto da divisao do somatorio por %d e: %d\n", v1, soma % v1);
    printf("o resto da divisao do somatorio por %d e: %d\n", v2, soma % v2);
    printf("O resto da divisao do somatorio por %d e: %d\n", v3, soma % v3);

    return 0;
}
