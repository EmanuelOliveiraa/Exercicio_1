#include <stdio.h>

int main(){

    int a,b,peso1,peso2;
    printf("Escreva as 2 notas e seus respectivos pesos: \n");
    scanf("%d", &a);
    scanf("%d", &peso1);
    scanf("%d", &b);
    scanf("%d", &peso2);
    int media = ((a * peso1) + (b * peso2))/2;
    printf("Resuntado da media e: %d\n",media);
    

return 0;
}
