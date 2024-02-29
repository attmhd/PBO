#include <stdio.h>
#define phi 3.14

int r, luas, keliling;

//Fungsi formula luas & keliling lingkaran
int lkLingkaran(int r, int* luas, int* keliling){
    *luas = phi * pow(r,2);
    *keliling = 2 * phi * r;

    return *luas, *keliling;
}

void alingkaran(){
    printf("Inputkan nilai jari-jari [dalam cm]: ");
    scanf("%d", &r);
    lkLingkaran(r, &luas, &keliling);
    printf("Luas : %d  dan Keliling : %d  lingkaran dengan Jari-jari : %d", luas, keliling, r);
}