#include <stdio.h>

float s, v;

//Fungsi formula volume kubus
float vKubus(float s){
    v = s * s * s;

    return v;
}

void akubus(){
    printf("Inputkan nilai sisi [dalam cm]: ");
    scanf("%f", &s);
    vKubus(s);
    printf("Volume : %.2f dengan sisi : %.2f \n\n", v, s);   
}