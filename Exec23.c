#include <stdio.h>



int main(){

    // declaração de variáveis
    int a, b, c, temp;

    // entrada de dados
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // processamento de dados (troca)
    temp = a;
    a = b;
    b = c;
    c = temp;


    
    // saída de dados
    printf("Novo valor de a: %d\n", a);
    printf("Novo valor de b: %d\n", b);
    printf("Novo valor de c: %d\n", c);



    return 0;
}
