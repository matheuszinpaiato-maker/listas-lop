#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n, fat;
	printf("Digite um número inteiro:\n");
	scanf("%d", &n);
	fat = n;
	for(int i = n; i > 1; i--){
		fat *= (i - 1);
	}
	printf("%d! = %d", n, fat);
	getch();
}