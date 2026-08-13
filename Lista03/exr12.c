#include <stdio.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int acumulador = 0;
	for(int i = 1; i <= 100;i++){
		acumulador += i;
	}
	printf("A soma dos números entre 0 e 100 é %d", acumulador);
	getch();
}