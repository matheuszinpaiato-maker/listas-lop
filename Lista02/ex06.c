#include <stdio.h>
int main() {
    int pontos;
    printf("Digite a quantidade de pontos \n");
    scanf("%d", &pontos);
    if (pontos >= 20) {
        printf("Classificado\n");
    } else if (pontos >= 10) {
        printf("Em disputa\n");
    } else {
        printf("Eliminado\n");
    }
    return 0;
}