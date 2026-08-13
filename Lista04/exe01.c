#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array2[5][5];
    
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
}
}