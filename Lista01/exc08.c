#include <stdio.h>
int main() {
    float raio, altura, area, volume;
    float pi = 3.14159;
    printf("Digite o raio (cm) \n");
    scanf("%f", &raio);
    printf("Digite a altura (cm) \n");
    scanf("%f", &altura);
    area = 2 * pi * raio * (raio + altura);
    volume = pi * raio * raio * altura;
    printf("Area em cm2 = %.2f\n", area);
    printf("Volume em cm3 = %.2f\n", volume);
    return 0;
}