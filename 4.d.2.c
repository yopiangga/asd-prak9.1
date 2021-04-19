#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void menu();
long int alokasi();

long int faktorialIterasi();
long int faktorialRekursi();
long int faktorialRekursiTail();

int pilihan;

int main(){
//	time_t t1, t2;
//	long int waktukomputasi;
//	time(&t1);
	
	do {
		menu();
	} while(pilihan != 4);
	
//	time(&t2);
//	waktukomputasi= difftime(t2,t1);
//	printf("%-25s", "Waktu Komputasi"); printf(": %d", waktukomputasi);
}

void menu(){
	time_t t1, t2;
	long int waktukomputasi;
	printf("========================\n");
	printf(" Menu Rekursi Iterasi\n");
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
			time(&t1);

			printf("%d\n\n", faktorialRekursi(alokasi()));
			
			time(&t2);
			waktukomputasi= difftime(t2,t1);
			printf("%-25s", "Waktu Komputasi"); printf(": %d\n", waktukomputasi);
			break;
		case 3:
			time(&t1);

			printf("%d\n\n", faktorialRekursiTail(alokasi(), 1));
			
			time(&t2);
			waktukomputasi= difftime(t2,t1);
			printf("%-25s", "Waktu Komputasi"); printf(": %d\n", waktukomputasi);
			break;
			
	}
}

long int alokasi(){
	long int data;
	printf("%-25s", "Masukkan bilangan"); printf(": ");
	scanf("%d", &data);
	fflush(stdin);
	return data;
}

long int faktorialIterasi(){
	long int data = alokasi();
	
	
	time_t t1, t2;
	long int waktukomputasi;
	time(&t1);
	
	
	
	int i;
	long int hasil = 1;
	
	for(i=data; i>1; i--){
		hasil = hasil * i;
	}
	
	printf("%d\n\n", hasil);
	
	time(&t2);
	waktukomputasi= difftime(t2,t1);
	printf("%-25s", "Waktu Komputasi"); printf(": %d\n", waktukomputasi);
}

long int faktorialRekursi(long int data){
	
	if(data == 1){
		return data;
	} else {
		return data * faktorialRekursi(data-1);
	}
}

long int faktorialRekursiTail(long int data, long int hasil){
	
	if(data == 1){
		return hasil;
	} else {
		hasil = hasil * data;
		return faktorialRekursiTail(data-1, hasil);
	}
	
}




