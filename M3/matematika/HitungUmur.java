/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matematika;

import java.time.LocalDate;

import java.util.Scanner;
/**
 *
 * @author rosify
 */

 

public class HitungUmur {

    static int[] hitungUmur(int bulan, int tahun){
        LocalDate date = LocalDate.now();
        int tahunIni = date.getYear();
        int bulanIni = date.getMonthValue();
    
        int ttl_bulan = ((tahunIni * 12 + bulanIni) - (tahun * 12 + bulan));
        
        int[] result = new int[2];
        result[0] = ttl_bulan / 12;
        result[1] = ttl_bulan % 12;
    
        return result;
    }
    public static void main(String[] args){
        int tahun, bulan;
        Scanner input = new Scanner(System.in);  // Create a Scanner object
        System.out.print("Masukkan tahun lahir anda : ");
        tahun = input.nextInt();
        System.out.print("Masukkan bulan lahir anda : ");
        bulan = input.nextInt();

        var result = hitungUmur(bulan, tahun);
        System.out.printf("Umur anda saat ini : %d tahun %d bulan \n " , result[0], result[1]);

    }
}


