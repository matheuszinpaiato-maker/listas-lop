#include <stdio.h>
int main() {
    float nota, nota1, nota2, nota3;
    printf("Digite as notas \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    nota = (nota1 + nota2 + nota3) / 3; 
    if (nota >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}