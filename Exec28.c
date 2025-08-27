#include <stdio.h>



int main(){


    // declaração de variáveis
    float celsius, fahrenheit;

    // entrada de dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // processamento de dados
    fahrenheit = (9 * celsius + 160) / 5;

    // saída de dados
    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);


    
    return 0;
}
