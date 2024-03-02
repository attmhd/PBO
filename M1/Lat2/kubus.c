#include <stdio.h>

int s, v;

//Fungsi formula volume kubus
int vKubus(int s){
    v = s * s * s;

    return v;
}

void akubus(){
    printf("Inputkan nilai sisi [dalam cm]: ");
    scanf("%d", &s);
    vKubus(s);
    printf("Volume : %d dengan sisi : %d \n\n", v, s);   
}