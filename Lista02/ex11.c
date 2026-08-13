#include <stdio.h>
int main() {
    char turno;
    printf("Digite o turno (M, V ou N) \n");
    scanf(" %c", &turno);
    if (turno == 'M') {
        printf("Bom dia\n");
    } else if (turno == 'V') {
        printf("Boa tarde\n");
    } else if (turno == 'N') {
        printf("Boa noite\n");
    } else {
        printf("Turno invalido\n");
    }
    return 0;
}