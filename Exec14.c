#include <stdio.h>

int main(){



    //declaraçao de variaveis
    int salario,energiaGasta,custoEnergia;
    //entrada de dados
    printf("Digite o salario mimimo: ");
    scanf("%d",&salario);
    printf("Digite o salario mimimo: ");
    scanf("%d",&energiaGasta);
    //processamento de dados
    custoEnergia = salario * 0.20;
    energiaGasta = energiaGasta * custoEnergia;
    //saida de dados
    printf("Valor em reais do kilowatt e: %d\n",custoEnergia);
    printf("Valor em reais a ser pago pela residencia: %d\n",energiaGasta);






    return 0;
}

