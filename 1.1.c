#include <stdlib.h>
#include <stdio.h>

int main(){
	int x;
	
	printf("%-25s", "Masukkan batas"); printf(": ");
	scanf("%d", &x);
	fflush(stdin);
	
	rekursi(x);
}

int rekursi(int x){
	if(x == 0){
		printf("%d ", x);
		return 0;
	} else {
		printf("%d ", x);
		return rekursi(x-1);
	}
}
