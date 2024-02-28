//Program menentukan bilangan prima

//Package/library
#include <stdio.h>
#include <stdbool.h>

//Deklarasi variabel
int n;
char c[1];
bool isPrima = true, isStart = true; 

//Fungsi
int choices(){
        printf("Lagi ? [Y/N] : ");
        scanf( "%c", &c );

        if ((c == 'Y') || (c == 'y'))   isStart = true;
        else if ((c == 'N') || (c == 'n'))  isStart = false;
        else printf("Pilihan yang anda Masukkan Out Of Context \n");
        return isStart;
}

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

    if (n == 1) isPrima = false;
    else if ((n % 2 == 1 )&&(2 >= n /2))    isPrima = true;

    return isPrima;
}

//Prosedur untuk cek bilangan Prima
void isPrimar(){
    
    printf("\n");
    if (isPrima == true)    printf("%i merupakan bilangan prima \n",n);
    else    printf("%i bukan bilangan prima \n",n);
}

int main(){
    do
    {
        head();
        formula();
        isPrimar();
        choices();

    } while (isStart!= false );
}