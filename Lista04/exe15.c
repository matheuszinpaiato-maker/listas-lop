#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
	SetConsoleOutputCP(65001);
	char name[5][20];
	char smaller[20];
	for(int i = 0; i < 5; i++){
	printf("Type the %dº of 5 names\n", i+1);
	scanf("%s",& name[i]);
}
	
	for(int i = 0; i < 5; i++){
	for(int j = 0; j < 5; j++){
	if(strcmp(name[i], name[j]) < 0){
	strcpy(smaller, name[i]);
	strcpy(name[i], name[j]);
	strcpy(name[j], smaller);
	}}}
	printf("The names that you write, in alphabetic order:\n");
	for(int i = 0; i < 5; i++){
	printf("%s\n", name[i]);
}
}