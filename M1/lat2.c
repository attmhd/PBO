//Program menghitung luas, keliling dan volume 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define phi 3.14

//Deklarasi Variabel
int choice, r, v , luas, keliling, p, l, t;
bool isCont = true;
enum choice{exit , lingkaran, bujurSangkar, persegiPanjang, kubus, tabung};

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

//Fungsi formula luas & keliling lingkaran
int lkLingkaran(int r, int* luas, int* keliling){
    *luas = phi * pow(r,2);
    *keliling = 2 * phi * r;

    return *luas, *keliling;
}

//Fungsi formula luas & keliling bujur sangkar
int lkBujurSangkar(int s, int* luas, int* keliling){
    *luas = pow(s,2);
    *keliling = 4 * s;

    return *luas, *keliling;
}

//Fungsi formula luas & keliling persegi panjang
int lkPersegiPanjang(int p, int l, int* luas, int* keliling){
    *luas = p * l;
    *keliling = 2 * (p + l);

    return *luas, *keliling;
}

//Fungsi formula volume kubus
int vKubus(int s){
    v = pow(s, 3);

    return v;
}

//Fungsi formula volume tabung
int vTabung(int r, int t){
    v = phi * r * t;

    return v;
}

void alingkaran(){
    printf("Inputkan nilai jari-jari [dalam cm]: ");
    scanf("%d", &r);
    lkLingkaran(r, &luas, &keliling);
    printf("Luas : %d  dan Keliling : %d  lingkaran dengan Jari-jari : %d", luas, keliling, r);
}



int main(){
    do
    {
        menu();

        switch (choice)
        {
        case exit:
            printf("Program selesai ............\n");
            break;
        case lingkaran:
            alingkaran();
        default:
            printf("Pilihan anda Out of Context ..\n");
            break;
        }

    } while (choice != exit);
    
}