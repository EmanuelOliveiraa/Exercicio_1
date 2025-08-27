#include <stdio.h>

int main(){

    //declaraçao de variaveis
    int diagonal,area;
    //entrada de dados
    printf("Digite a diagonal do quadrado: ");
    scanf("%d",&diagonal);
    //processamento de dados
    area = diagonal * diagonal;
    //saida de dados
    printf("A area do quadrado e: %.1d\n",area);




    return 0;
}

