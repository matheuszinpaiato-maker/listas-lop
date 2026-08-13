#include <stdio.h>
int main() {
    int caminhoes, alqueires;
    float producao, viagens;
    printf("Digite o numero de caminhoes \n");
    scanf("%d", &caminhoes);
    printf("Digite o numero de alqueires \n");
    scanf("%d", &alqueires);
    producao = alqueires * 250;
    viagens = producao / (caminhoes * 18);
    printf("Viagens necessarias: %.2f\n", viagens);
    return 0;
}