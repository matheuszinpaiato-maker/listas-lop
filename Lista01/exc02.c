#include <stdio.h>
int main() {
    int velocidade, distancia, tempo;
    printf("Digite a velocidade\n");
    scanf("%d", &velocidade);
    printf("Digite a distancia\n");
    scanf("%d", &distancia);
    tempo = distancia / velocidade;
    printf("Tempo necessario em horas sera: %d hora \n", tempo);
    return 0;
}