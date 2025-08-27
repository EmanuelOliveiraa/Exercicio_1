#include <stdio.h>

int main(){



    //declaraçao de variaveis
    int anoNascimento,anoAtual,idade,semanas;
    //entrada de dados
    printf("Digite o seu ano de nascimento: ");
    scanf("%d",&anoNascimento);
    printf("Digite o seu ano atual: ");
    scanf("%d",&anoAtual);
    //processamento de dados
    idade = anoAtual - anoNascimento;
    semanas = idade * 52;
    //saida de dados
    printf("Sua idade e: %d\n",idade);
    printf("Sua idade em semanas: %d\n",semanas);






    return 0;
}

