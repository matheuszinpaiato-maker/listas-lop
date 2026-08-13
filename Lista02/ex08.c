#include <stdio.h>
int main() {
    float valor, valorFinal;
    printf("Digite o valor da compra \n");
    scanf("%f", &valor);
    if (valor > 500) {
        valorFinal = valor - (valor * 10 / 100);
    } else if (valor > 200) {
        valorFinal = valor - (valor * 5 / 100);
    } else {
        valorFinal = valor;
    }
    printf("Valor final: %.2f\n", valorFinal);
    return 0;
}