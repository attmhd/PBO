#include <stdio.h>

int s, luas, keliling;

//Fungsi formula luas & keliling bujur sangkar
int lkBujurSangkar(int s, int* luas, int* keliling){
    *luas = pow(s,2);
    *keliling = 4 * s;

    return *luas, *keliling;
}

void abujurSangkar(){
    printf("Inputkan nilai sisi [dalam cm]: ");
    scanf("%d", &s);
    lkBujurSangkar(s, &luas, &keliling);
    printf("Luas : %d dan Keliling : %d dengan sisi : %d \n", luas, keliling, s);
}