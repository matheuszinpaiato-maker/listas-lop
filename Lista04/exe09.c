#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	float array2[3][3];
	int l = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			l++;
		printf("Type the %dº of 9 whole numbers\n", l);
			scanf("%f",& array2[i][j]);
	}}
	printf("The numbers that you write from backwards:\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
	printf("%g\t", array2[2-i][2-j]);
}printf("\n");
}
}