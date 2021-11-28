#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char barang1[100], barang2[100], barang3[100];
	int uangSaku, hargaBarang1, hargaBarang2, hargaBarang3;
	printf("Barang yang dibeli 1 : ");
	scanf("%s", &barang1);
	printf("Harga barang : ");
	scanf("%d", &hargaBarang1);
	printf("Barang yang dibeli 2 : ");
	scanf("%s", &barang2);
	printf("Harga barang : ");
	scanf("%d", &hargaBarang2);
	printf("Barang yang dibeli 3 : ");
	scanf("%s", &barang3);
	printf("Harga barang : ");
	scanf("%d", &hargaBarang3);
	uangSaku = 100000;
	printf("uangSaku anda : %d", uangSaku);
	uangSaku = uangSaku-hargaBarang1-hargaBarang2-hargaBarang3;
	
	printf("\n\n Informasi Belanjaan \n\n");
	
	printf("barang 1 : %s \n", barang1);
	printf("harga : %d \n", hargaBarang1);
	printf("barang 2 : %s \n", barang2);
	printf("harga : %d \n", hargaBarang2);
	printf("barang 3 : %s \n", barang3);
	printf("harga barang 3 : %d \n", hargaBarang3);
	printf("kembalian : %d", uangSaku);
	
	return 0;
	getch();
}
