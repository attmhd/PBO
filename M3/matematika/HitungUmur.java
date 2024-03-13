/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matematika;

/**
 *
 * @author rosify
 */

import java.util.Scanner;

public class HitungUmur {
    public static void main(String[] args){
        int  tlahir  ,currentDate = 2024;
        
        Scanner input = new Scanner(System.in);  // Create a Scanner object
        System.out.print("Masukkan tahun lahir anda : ");

        tlahir = input.nextInt();

        int umur = currentDate - tlahir;
        System.out.printf("Umur anda saat ini : %d tahun \n " , umur);

    }
}
