#include<stdio.h>
#include <cstdlib>

int main(){
    float nilai;
    char nilai_huruf, lagi;
	char nama[50],NIM[15],Kel[5];
    ulangi:
    system("cls");
    //clrscr();
    
    
   
    printf("Nama : ");
	gets(nama);
	printf("NIM  : ");
	gets(NIM);
	printf("Kelompok : ");
	gets(Kel);
	
	printf("Masukan Nilai : ");  
	scanf("%f", &nilai);
    if(nilai >= 76.00 && nilai <= 100.00){
        printf("Nilai Anda: A");
        nilai_huruf = 'A';
    } else if(nilai >= 66.00 && nilai <= 75){
        printf("Nilai Anda: B");
        nilai_huruf = 'B';
    } else if(nilai >= 51.00 && nilai <= 65){
        printf("Nilai Anda: C");
        nilai_huruf = 'C';
    } else if(nilai >= 0.00 && nilai <= 50){
        printf("Nilai Anda: D");
        nilai_huruf = 'D';
    } else{
        printf("Maaf, Anda Tidak Punya Nilai!");
        nilai_huruf = '-';
    }

    switch(nilai_huruf){
        case 'A' : printf("\nPertahankan!"); break;
        case 'B' : printf("\nHarus Lebih Baik Lagi!"); break;
        case 'C' : printf("\nHarus Banyak Belajar!"); break;
        case 'D' : printf("\nJangan Keseringan Main!"); break;
        default : printf("\nMaaf, Anda Tidak Punya Nilai!");
    }

    printf("\nCoba Lagi? (y/n): "); 
	scanf("%s", &lagi);
    if(lagi == 'y'){
        goto ulangi;
    } else{
        printf("Terimakasih. Tekan Enter Untuk Keluar.");
    }
	
}
