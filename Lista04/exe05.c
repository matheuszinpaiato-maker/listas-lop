#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
    int array1[25];
    int number, positionx, existence;
	srand(time(NULL));
	printf("Type a whole number between 1 and 100\n");
	scanf("%d", &number);
	printf("\n");
	
    for (int i = 0; i < 25; i++) {
            array1[i] = rand() % 101;
            if (number == array1[i]){
			existence = 1;
			positionx = i;
			}
		}
    for (int i = 0; i < 25; i++) {
            printf("%d   ", array1[i]);
        }
        if (existence == 1) {printf("\n\nYour number is in the column %d", positionx + 1);}
        else printf("\n\nYour number is not in the array");
}
