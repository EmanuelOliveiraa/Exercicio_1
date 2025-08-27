#include <stdio.h>




int main(){

    //declaração de variaveis
    int eleitores, votos1, votos2, nulos;
    float perc1, perc2, percnulos;

    //entrada de dados
    printf("Digite o numero total de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite o numero de votos do candidato 1: ");
    scanf("%d", &votos1);
    printf("Digite o numero de votos do candidato 2: ");
    scanf("%d", &votos2);

    // processamento de dados
    nulos = eleitores - (votos1 + votos2);
    perc1 = (votos1 * 100.0) / eleitores;
    perc2 = (votos2 * 100.0) / eleitores;
    percnulos = (nulos * 100.0) / eleitores;

    // saida de dados
    printf("Percentual de votos do candidato 1: %.2f%%\n", perc1);
    printf("Percentual de votos do candidato 2: %.2f%%\n", perc2);
    printf("Percentual de votos nulos: %.2f%%\n", percnulos);





    return 0;
}
