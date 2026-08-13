#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array2[5][5];
    int number, positionx, positiony, existence;
    
    srand(time(NULL));
    
    printf("Type a number between 1 and 100\n");
	scanf("%d", &number);
	printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = rand() % 101;
                if(array2[i][j] == number){
			existence = 1;
			positionx = j;
			positiony = i;}
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }
        if (existence == 1) {printf("\n\nYour number is in the column %d and row %d", positionx+1, positiony+1);}
        else printf("\n\nYour number is not in the array");
}