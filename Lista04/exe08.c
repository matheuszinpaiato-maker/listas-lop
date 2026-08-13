#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	float array1[5];
	for(int i = 0; i < 5; i++){
	printf("Type the %dº of 5 real numbers\n", i+1);
	scanf("%f",& array1[i]);
	}
	printf("The numbers that you write from backwards:\n");
	for(int i = 0; i < 5; i++){
	printf("%g\t", array1[4-i]);
}
}