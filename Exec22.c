#include <stdio.h>

int main(){

    // declaração de variáveis
    float produto1, produto2, produto3, produto4, produto5, total, pagamento, troco;

    // entrada de dados
    printf("Digite o valor do produto 1: ");
    scanf("%f", &produto1);
    printf("Digite o valor do produto 2: ");
    scanf("%f", &produto2);
    printf("Digite o valor do produto 3: ");
    scanf("%f", &produto3);
    printf("Digite o valor do produto 4: ");
    scanf("%f", &produto4);
    printf("Digite o valor do produto 5: ");
    scanf("%f", &produto5);

    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);




    // processamento de dados
    total = produto1 + produto2 + produto3 + produto4 + produto5;
    troco = pagamento - total;

    // saída de dados
    printf("O valor total da compra e: R$ %.2f\n", total);
    printf("O troco a ser devolvido e: R$ %.2f\n", troco);


    
    return 0;
}
