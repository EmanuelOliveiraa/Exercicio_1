#include <stdio.h>

int main(){
    //quadrado
    float area,l1,l2;
    printf("Escreva as medidas do quadrado: \n");
    scanf("%f", &l1);
    scanf("%f", &l2);
    area = l1 * l2;
    printf("A area do quadrado e: %.1f\n",area);

    //triangulo
    float base,altura;
    printf("Escreva o valor da base e altura do triangulo.\n");
    scanf("%f",&base);
    scanf("%f",&altura);
    area = (base * altura)/2;
    printf("A area do triangulo e: %.1f\n",area);




return 0;
}
