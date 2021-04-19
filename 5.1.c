#include <stdlib.h>
#include <stdio.h>

void menu();
int alokasiN();
int alokasiR();

int faktorialRekursi();

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
	printf("1. Permutasi\n");
	printf("2. Kombinasi\n");
	printf("3. Exit\n");
	printf("%-25s", "Pilih Menu"); printf(": ");
	scanf("%d", &pilihan);
	fflush(stdin);
		
	switch(pilihan){
		case 1:
			permutasi();
			break;
		case 2:
			kombinasi();
			break;
			
	}

}

int alokasiN(){
	int data;
	printf("%-25s", "Masukkan Nilai N"); printf(": ");
	scanf("%d", &data);
	fflush(stdin);
	return data;
}

int alokasiR(){
	int data;
	printf("%-25s", "Masukkan Nilai R"); printf(": ");
	scanf("%d", &data);
	fflush(stdin);
	return data;
}

int faktorialRekursi(int data){
	
	if(data == 1){
		return data;
	} else {
		return data * faktorialRekursi(data-1);
	}
}

int permutasi(){
	int n, r;
	int hasil;
	
	n = alokasiN();
	r = alokasiR();
	
	hasil = faktorialRekursi(n)/faktorialRekursi(n-r);
	
	printf("%-25s", "Hasil Permutasi"); printf(": %d\n\n", hasil);
}

int kombinasi(){
	int n, r;
	int hasil;
	
	n = alokasiN();
	r = alokasiR();
	
	hasil = faktorialRekursi(n)/(faktorialRekursi(n-r) * faktorialRekursi(r));
	
	printf("%-25s", "Hasil Kombinasi"); printf(": %d\n\n", hasil);
}




