//Program menghitung luas, keliling dan volume 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define phi 3.14

int choice;

int menu(){
    system("clear");
    printf("           Program menghitung luas, keliling dan volume           \n")  ;
    printf("===================================================================\n")  ;
    printf("1. Luas dan Keliling Lingkaran\n");
    printf("2. Luas dan Keliling Bujur Sangkar");
    printf("3. Luas dan Keliling Persegi Panjang");
    printf("4. Volume Kubus");
    printf("5. Volume Tabung");

    scanf("%d", &choice);

    return choice; 
}

int lkLingkaran(int r, int* luas, int* keliling){
    *luas = phi * pow(r,2);
    *keliling = 2 * phi * r;

    return *luas, *keliling;
}

int main(){

}