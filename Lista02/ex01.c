#include <stdio.h>
int main() {
    int a, b, c, resultado;	
    printf("Digite os numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    resultado = (a + b) / c;
    printf("Resultado: %d", resultado);
    return 0;
}