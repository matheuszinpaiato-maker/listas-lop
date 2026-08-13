#include <stdio.h>
int main() {
    char nome[50];
    float preco, novoPreco;
    printf("Digite o nome da mercadoria \n");
    scanf("%s", nome);
    printf("Digite o preco \n");
    scanf("%f", &preco);
    novoPreco = preco + (preco * 5 / 100);
    printf("Mercadoria %s\n", nome);
    printf("Novo preco %.2f\n", novoPreco);
    return 0;
}