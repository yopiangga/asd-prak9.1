#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char y[100];
	
	printf("%-25s", "Masukkan Kata"); printf(": ");
	scanf("%s", &y);
	fflush(stdin);
	
	printf("%-25s", "Kata Hasil"); printf(": ");
	rekursi(y, strlen(y)-1);
}

int rekursi(char y[100], int x){

	if(x == 0){
		printf("%c", y[x]);
		return 0;
	} else {
		printf("%c", y[x]);
		return rekursi(y, x-1);
	}
}
