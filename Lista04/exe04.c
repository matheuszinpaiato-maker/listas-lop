#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(65001);
    int array2[5][5];
    int largest = 0;
    int largesti = 0;
    int largestj = 0;
    
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = rand() % 101;
                if(array2[i][j] > largest){
			largest = array2[i][j];
			largestj = j;
			largesti = i;
			}
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }
        printf("\n");
        printf("\nThe largest number is %d, it is in row %d and column %d", largest, largesti + 1, largestj +1);
}