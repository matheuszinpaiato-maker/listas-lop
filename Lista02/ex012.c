#include <stdio.h>
int main() {
    int anonascimento, anoatual, idade;
    int ano = 2026;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anonascimento);
    idade = ano - anonascimento;
    if (idade >= 16) {
        printf("Pode votar\n");
    } else {
        printf("Nao pode votar\n");
    }
    return 0;
}