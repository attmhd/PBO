#include <stdio.h>
#define phi 3.14

int r, v;

//Fungsi formula volume tabung
int vTabung(int r, int t){
    v = phi * r * t;

    return v;
}

void atabung(){
    printf("Inputkan nilai jari-jari [dalam cm]: ");
    scanf("%d", &r);
    lkLingkaran(r);
    printf("Luas : %d  dan Keliling : %d  lingkaran dengan Jari-jari : %d", v, r);
}