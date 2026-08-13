#include <stdio.h>
int main() {
    char nome[50];
    int vitorias, empates, pontos;
    printf("Digite o nome do time \n");
    scanf("%s", nome);
    printf("Digite o numero de vitorias \n");
    scanf("%d", &vitorias);
    printf("Digite o numero de empates \n");
    scanf("%d", &empates);
    pontos = (vitorias * 3) + empates;
    printf("Time: %s\n", nome);
    printf("O total de pontos sao: %d\n", pontos);
    return 0;
}