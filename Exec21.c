#include <stdio.h>



int main(){




    // declaração de variáveis
    float comprimento,largura,profundidade,volume,valor;

    // entrada de dados
    printf("Digite o comprimento da piscina: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da piscina: ");
    scanf("%f", &largura);
    printf("Digite a profundidade da piscina: ");
    scanf("%f", &profundidade);

    // processamento de dados
    volume = comprimento * largura * profundidade;
    valor = volume * 45.0;

    // saída de dados
    printf("O volume da piscina e: %.2f m3\n", volume);
    printf("O valor da construcao e: R$ %.2f\n", valor);



    return 0;
}
