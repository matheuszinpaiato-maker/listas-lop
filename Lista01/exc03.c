#include <stdio.h>
int main() {
    char nome[50];
    float salario, reajuste, novosalario;
    printf("Digite o nome \n");
    scanf("%s", nome);
    printf("Digite o salario \n");
    scanf("%f", &salario);
    printf("Digite o reajuste em porcentagem \n");
    scanf("%f", &reajuste);
    novosalario = salario + (salario * reajuste / 100);
    printf("%s\n", nome);
    printf("Novo salario apos reajsute e %.2f reais\n", novosalario);
    return 0;
}