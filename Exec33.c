#include <stdio.h>

int main(){

    // declaração de variáveis
    int nascimento, atual, idade, idade2028;

    // entrada de dados
    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &atual);

    // processamento de dados
    idade = atual - nascimento;
    idade2028 = 2028 - nascimento;

    // saída de dados
    printf("A idade atual e: %d anos\n", idade);
    printf("A idade em 2028 sera: %d anos\n", idade2028);

    
    
    return 0;



}
