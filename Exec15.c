#include <stdio.h>

int main(){



    //declaraçao de variaveis
    int peso,gramas,novoPeso;
    //entrada de dados
    printf("Digite o seu peso: ");
    scanf("%d",&peso);
    //processamento de dados
    gramas = peso * 1000;
    novoPeso = peso * 1.05;
    //saida de dados
    printf("Peso em gramas: %d\n",gramas);
    printf("Novo peso se engorda 5%%: %d\n",novoPeso);






    return 0;
}

