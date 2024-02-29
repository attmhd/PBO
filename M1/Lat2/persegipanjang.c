#include <stdio.h>

int p, l , luas, keliling;

//Fungsi formula luas & keliling persegi panjang
int lkPersegiPanjang(int p, int l, int* luas, int* keliling){
    *luas = p * l;
    *keliling = 2 * (p + l);

    return *luas, *keliling;
}

void apersegiPanjang(){
    printf("Inputkan nilai panjang dan lebar [dalam cm]\n");
    printf("Panjang : ");
    scanf("%d", &p);
    printf("\nLebar: ");
    scanf("%d", &l);
    lkPersegiPanjang(p, l, &luas, &keliling);
    printf("\nLuas : %d dan Keliling : %d dengan panjang : %d  dan lebar : %d \n", luas, keliling, p, l);
}