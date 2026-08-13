#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	char names[5][20];
	for(int i = 0; i < 5; i++){
	printf("Type the %dº of 5 names\n", i+1);
	scanf("%s",& names[i]);
	}
	printf("The numbers that you write from backwards:\n");
	for(int i = 0; i < 5; i++){
	printf("%s\t", names[4-i]);
}
}