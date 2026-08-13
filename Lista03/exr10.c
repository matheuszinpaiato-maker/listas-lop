#include <stdio.h>
int main() {
    int numero;
    int i;
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    for (i = 0; i <= numero; i = i + 2) {
        printf("%d\n", i);
    }
    return 0;
}