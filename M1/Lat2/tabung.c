#include <stdio.h>
#define phi 3.14

int r, v, t;

//Fungsi formula volume tabung
int vTabung(int r, int t){
    v = phi * r * r * t;

    return v;
}

void atabung(){
    printf("Inputkan nilai jari-jari dan tinggi [dalam cm] \n");
    printf("Jari-jari : ");
    scanf("%d", &r);
    printf("Tinggi : ");
    scanf("%d", &t);    
    vTabung(r, t);
    printf("Volume : %d  lingkaran dengan Jari-jari : %d dan tinggi : %d\n\n", v, r, t);
}