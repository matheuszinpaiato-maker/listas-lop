#include <stdio.h>
int main() {
    float distancia, tempo;
    printf("Digite a distancia (km) \n");
    scanf("%f", &distancia);
    tempo = distancia / 900;
    printf("Tempo necessario: %.2f horas\n", tempo);
    return 0;
}