#include <stdio.h>
int main() {
    char cidade[50];
    int eleitores, votos;
    float porcentagem;
    printf("Digite o nome da cidade \n");
    scanf("%s", cidade);
    printf("Digite o numero total de eleitores \n");
    scanf("%d", &eleitores);
    printf("Digite o numero de votos apurados \n");
    scanf("%d", &votos);
    porcentagem = (votos * 100.0) / eleitores;
    printf("Cidade: %s\n", cidade);
    printf("Participacao: %.2f%%\n", porcentagem);
    return 0;
}