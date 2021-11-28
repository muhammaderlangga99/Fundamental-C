#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nama[100], jabatan[100];
	int penghasilan, gaji, tunjangan, bonus, uangLembur;
	float pajak;
	
	pajak = 0.05;
	printf("Masukkan nama : ");
	scanf("%s", &nama);
	printf("jabatan : "); //21107004
	scanf("%s", &jabatan);
	printf("Jumlah gaji : ");
	scanf("%d", &gaji);
	printf("Tunjangan : ");
	scanf("%d", &tunjangan);
	printf("bonus yang diberikan : ");
	scanf("%d", &bonus);
	printf("Uang Lembur : ");
	scanf("%d", &uangLembur);
	penghasilan = gaji + tunjangan + bonus + uangLembur * pajak;
	
	printf("\n\n ====== slip gaji ===== \n\n");
	
	printf("Nama Karyawan : %s \n", nama);
	printf("Jabatan : %s \n", jabatan);
	printf("Penghasilan bersih : %d", penghasilan);
	return 0;
}
