#include <stdio.h>
int main() {
    float salario, novosalario;
    printf("Digite seu salario \n");
    scanf("%f", &salario);
    if (salario <= 1800) {
        novosalario = salario + (salario * 15 / 100);
    } else {
        novosalario = salario + (salario * 10 / 100);
    }
    printf("Novo salario: %.2f\n", novosalario);
    return 0;
}