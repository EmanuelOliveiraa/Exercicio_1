#include <stdio.h>
#include <math.h>

int main(){

    float a,potencia,raiz;
    printf("Escreva um numero: \n");
    scanf("%f", &a);
    potencia = pow(a,2);
    raiz = sqrt(a);
    printf("Elevado ao quadrado: %f\n",potencia);
    printf("Raiz quadrada: %f\n",raiz);



return 0;
}
