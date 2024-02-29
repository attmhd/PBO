//Program menentukan bilangan prima

//Package/library
#include <stdio.h>
#include <stdbool.h>

//Deklarasi variabel
int n, i;

//Fungsi untuk tampilan head dan input angka
int head(){
    printf("##  Program menentukan bilangan prima  ## \n");
    printf("========================================== \n\n");
    printf("Masukkan bilangan bulat : ");

    //Input angka
    scanf("%d",&n);
    return n;
}

//Fungsi untuk formula menentukan bilangan prima
int formula(){

    if (n == 1) return false;
    else{
        for ( i = 2; i  <= n /2; i++)
        {
            if (n % i == 0) {
                return false;
                break;
            }
        }
        return true;
    }
}

//Prosedur untuk cek bilangan Prima
void isPrimar(){

    if (formula() == true)   printf("\n%i merupakan bilangan prima \n",n);
    else    printf("%i bukan bilangan prima \n",n);
}

int main(){
        head();
        isPrimar();
}