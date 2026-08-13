#include <stdio.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &n);
	for(int i = 1; i < n; i+=2){
		printf("%d, ",i);	
	}
	getch();
}