#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int array1[10];
	int smallest, largest;
	int contl = 0;
	int conts = 0;
	int rowl, rows;
	for(int i = 0; i < 10; i++){
	printf("Type the %dº of 10 whole numbers\n", i+1);
	scanf("%d",& array1[i]);
}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(array1[i] >= array1[j]) contl++;
			if(array1[i] <= array1[j]) conts++; 
			}
			if(contl ==	10){
			largest = array1[i];
			rowl = i;
			}
			if(conts ==	10){
			smallest = array1[i];
			rows = i;
			}
			contl = 0;
			conts = 0;}
		printf("The largest number is %d, it is in the row %d\n", largest, rowl+1);
		printf("The smallest number is %d, it is in the row %d", smallest, rows+1);	
	}

