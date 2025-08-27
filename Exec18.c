#include <stdio.h>

int main(){



    //declaraçao de variaveis
    int total,quantidade1,valor1,quantidade2,valor2,quantidade3,valor3;
    //entrada de dados
    printf("Digite a quantidade do produto 1: ");
    scanf("%d",&quantidade1);
    printf("Digite o valor do produto 1: ");
    scanf("%d",&valor1);
    printf("Digite a quantidade do produto 2: ");
    scanf("%d",&quantidade2);
    printf("Digite o valor do produto 2: ");
    scanf("%d",&valor2);
    printf("Digite a quantidade do produto 3: ");
    scanf("%d",&quantidade3);
    printf("Digite o valor do produto 3: ");
    scanf("%d",&valor3);
    //processamento de dados
    total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);
    //saida de dados
    printf("Valor total dos produtos: %d\n",total);






    return 0;
}

