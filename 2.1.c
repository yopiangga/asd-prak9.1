#include <stdlib.h>
#include <stdio.h>

int main(){
	int x;
	
	printf("%-25s", "Masukkan batas"); printf(": ");
	scanf("%d", &x);
	fflush(stdin);
	
	rekursi(x, 0);
}

int rekursi(int x, int y){
		
	if(y == x){
		printf("%d ", y);
		return 0;
	} else {
		printf("%d ", y);
		return rekursi(x, y+1);
	}
}
