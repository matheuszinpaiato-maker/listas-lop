#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(65001);
    int vetor[25];
    char order;
    int save;
	srand(time(NULL));
	
    for (int i = 0; i < 25; i++) {
            vetor[i] = rand() % 101;
		}
    for (int i = 0; i < 25; i++) {
            printf("%d   ", vetor[i]);
        }
    printf("\nDo you want to see the numbers in ascending or descending order? (a/d)\n");
	scanf("%c",& order);
	if(order == 'd'){
	    for (int i = 0; i < 25; i++) {
    		for (int j = i + 1; j < 25; j++) {
    			if (vetor[i]<vetor [j]){
    				save = vetor [i];
    				vetor[i] = vetor[j];
    				vetor[j]= save;
					}
    			}
    	    printf("%d   ", vetor[i]);
    	}
    }
    else{
       	for (int i = 0; i < 25; i++){
   			for (int j = i + 1; j < 25; j++){
   				if (vetor[i]>vetor [j]){
   					save = vetor [i];
   					vetor[i] = vetor[j];
    				vetor[j] = save;
					}
        		}
			printf("%d   ", vetor[i]);
}
}
}
