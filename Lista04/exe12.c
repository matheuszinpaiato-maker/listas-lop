#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int array1[10];
	int smaller;
	for(int i = 0; i < 10; i++){
	printf("Type the %dº of 10 whole numbers\n", i+1);
	scanf("%d",& array1[i]);
}
	
	for(int i = 0; i < 10; i++){
	for(int j = 0; j < 10; j++){
	if(array1[i] > array1[j]){
	smaller = array1[i];
	array1[i] = array1[j];
	array1[j] = smaller;
	}}}
	printf("The numbers that you write in descending order:\n");
	for(int i = 0; i < 10; i++){
	printf("%d\t", array1[i]);
}
}
