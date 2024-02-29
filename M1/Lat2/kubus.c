#include <stdio.h>

int s, v;

//Fungsi formula volume kubus
int vKubus(int s){
    v = pow(s, 3);

    return v;
}

void akubus(){
    printf("Inputkan nilai sisi [dalam cm]: ");
    scanf("%d", &s);
    lkBujurSangkar(s);
    printf("Volume : %d dengan sisi : %d \n", v, s);   
}