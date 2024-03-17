#include <stdio.h>
#define phi 3.14

float r, luas, keliling;

//Fungsi formula luas & keliling lingkaran
float lkLingkaran(float r, float* luas, float* keliling){
    *luas = phi * r * r;
    *keliling = 2 * phi * r;

    return *luas, *keliling;
}

void alingkaran(){
    printf("Inputkan nilai jari-jari [dalam cm]: ");
    scanf("%f", &r);
    lkLingkaran(r, &luas, &keliling);
    printf("Luas : %.2f  dan Keliling : %.2f  lingkaran dengan Jari-jari : %.2f \n\n", luas, keliling, r);
}