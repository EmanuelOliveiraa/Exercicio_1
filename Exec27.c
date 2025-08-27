#include <stdio.h>


int main(){

    // declaração de variáveis
    float a, b, c, d, e, f, x, y;

    // entrada de dados
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de d: ");
    scanf("%f", &d);
    printf("Digite o valor de e: ");
    scanf("%f", &e);
    printf("Digite o valor de f: ");
    scanf("%f", &f);


    
    // processamento de dados
    y = (a * f - c * d) / (a * e - b * d);
    x = (c * e - b * f) / (a * e - b * d);
    
    // saída de dados
    printf("O valor de x e: %.2f\n", x);
    printf("O valor de y e: %.2f\n", y);



    return 0;
}
