#include <stdio.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	do{
		printf("Digite o número 4:\n");
		scanf("%d", &n);
		printf("O quadrado de %d é %d\n", n, n * n);
	}while(n != 4);
	printf("Até que emfim, obrigado!");
	getch();
}