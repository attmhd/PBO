//Program menghitung luas, keliling dan volume 
#include <stdio.h>
#include "menu.c"
#include "lingkaran.c" 
#include "persegipanjang.c"
#include "bujursangkar.c"
#include "tabung.c" 
#include "kubus.c"

//Deklarasi Variabel
int choice;
enum choice{exit , lingkaran, bujurSangkar, persegiPanjang, kubus, tabung};


int main(){
    do
    {
        menu();

        switch (choice)
        {
        case exit:
            printf("Program selesai ............\n");
            break;
        case lingkaran:
            alingkaran();
            break;
        case bujurSangkar:
            abujurSangkar();
            break;
        case persegiPanjang:
            apersegiPanjang();
            break;
        case kubus:
            akubus();
            break;
        case tabung:
            atabung();
            break;
        default:
            printf("Pilihan anda Out of Context ..\n");
            break;
        }

    } while (choice != exit);
    
}