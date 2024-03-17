#include <stdio.h>
#define phi 3.14

float r, v, t;

//Fungsi formula volume tabung
float vTabung(float r, float t){
    v = phi * r * r * t;

    return v;
}

void atabung(){
    printf("Inputkan nilai jari-jari dan tinggi [dalam cm] \n");
    printf("Jari-jari : ");
    scanf("%f", &r);
    printf("Tinggi : ");
    scanf("%f", &t);    
    vTabung(r, t);
    printf("Volume : %.2f  lingkaran dengan Jari-jari : %.2f dan tinggi : %.2f\n\n", v, r, t);
}