#include <stdlib.h>
#include <stdio.h>

void menu();
int alokasi();

int faktorialIterasi();
int faktorialRekursi();
int faktorialRekursiTail();

int pilihan;

int main(){
	do {
		menu();
	} while(pilihan != 4);
}

void menu(){
	printf("========================\n");
	printf(" Menu Insert Delete DLL\n");
	printf("========================\n");
	printf("1. Faktorial Iterasi\n");
	printf("2. Faktorial Rekursi\n");
	printf("3. Faktorial Rekursi Tail\n");
	printf("4. Exit\n");
	printf("%-25s", "Pilih Menu"); printf(": ");
	scanf("%d", &pilihan);
	fflush(stdin);
		
	switch(pilihan){
		case 1:
			faktorialIterasi();
			break;
		case 2:
			printf("%d\n\n", faktorialRekursi(alokasi()));
			break;
		case 3:
			printf("%d\n\n", faktorialRekursiTail(alokasi(), 1));
			break;
			
	}

}

int alokasi(){
	int data;
	printf("%-25s", "Masukkan bilangan"); printf(": ");
	scanf("%d", &data);
	fflush(stdin);
	return data;
}

int faktorialIterasi(){
	int data = alokasi();
	int i, hasil = 1;
	
	for(i=data; i>1; i--){
		hasil = hasil * i;
	}
	
	printf("%d\n\n", hasil);
}

int faktorialRekursi(int data){
	
	if(data == 1){
		return data;
	} else {
		return data * faktorialRekursi(data-1);
	}
}

int faktorialRekursiTail(int data, int hasil){
	
	if(data == 1){
		return hasil;
	} else {
		hasil = hasil * data;
		return faktorialRekursiTail(data-1, hasil);
	}
}



