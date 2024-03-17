#include <stdio.h>

float s, luas, keliling;

//Fungsi formula luas & keliling bujur sangkar
float lkBujurSangkar(float s, float* luas, float* keliling){
    *luas = s * s;
    *keliling = 4 * s;

    return *luas, *keliling;
}

void abujurSangkar(){
    printf("Inputkan nilai sisi [dalam cm]: ");
    scanf("%f", &s);
    lkBujurSangkar(s, &luas, &keliling);
    printf("Luas : %.2f dan Keliling : %.2f dengan sisi : %.2f \n\n", luas, keliling, s);
}