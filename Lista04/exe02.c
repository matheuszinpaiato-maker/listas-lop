#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array1[25];
    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
            array1[i] = rand() % 101;
        }

    for (int i = 0; i < 25; i++) {
            printf("%d   ", array1[i]);
        }
}