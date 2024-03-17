#include <stdio.h>

float p, l , luas, keliling;

//Fungsi formula luas & keliling persegi panjang
float lkPersegiPanjang(float p, float l, float* luas, float* keliling){
    *luas = p * l;
    *keliling = 2 * (p + l);

    return *luas, *keliling;
}

void apersegiPanjang(){
    printf("Inputkan nilai panjang dan lebar [dalam cm]\n");
    printf("Panjang : ");
    scanf("%f", &p);
    printf("\nLebar: ");
    scanf("%f", &l);
    lkPersegiPanjang(p, l, &luas, &keliling);
    printf("\nLuas : %.2f dan Keliling : %.2f dengan panjang : %.2f  dan lebar : %.2f \n\n", luas, keliling, p, l);
}