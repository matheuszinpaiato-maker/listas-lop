#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(65001);
    int array1[25];
    int largest = 0;
    int largesti = 0;
	srand(time(NULL));

    for (int i = 0; i < 25; i++) {
            array1[i] = rand() % 101;
        if(array1[i] > largest){
		largest = array1[i];
		largesti = i;
			}
}
    for (int i = 0; i < 25; i++) {
            printf("%d   ", array1[i]);
        }
        printf("\nThe largest number is %d and it is in column %d", largest, largesti + 1);
}