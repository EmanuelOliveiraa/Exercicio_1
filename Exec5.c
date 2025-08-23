#include <stdio.h>

int main(){

    int a,b,c,peso;
    printf("\nEscreva 3 notas: ");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    scanf("%d\n", &peso);

    int media = (a + b + c)/peso;
    printf("%d Resuntado da media e: ",media);
    

return 0;
}
