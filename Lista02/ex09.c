#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero > 100) {
        printf("Maior que 100\n");
    } else {
        printf("Menor ou igual a 100\n");
    }
    return 0;
}