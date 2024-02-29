#include <stdio.h>

int choice;

//Fungsi Menu
int menu(){
    printf("           Program menghitung luas, keliling dan volume           \n")  ;
    printf("===================================================================\n")  ;
    printf("1. Luas dan Keliling Lingkaran\n");
    printf("2. Luas dan Keliling Bujur Sangkar\n");
    printf("3. Luas dan Keliling Persegi Panjang\n");
    printf("4. Volume Kubus\n");
    printf("5. Volume Tabung\n");
    printf("0. Exit\n");
    printf("Masukkan pilihan anda : ");

    scanf("%d", &choice);

    return choice; 
}