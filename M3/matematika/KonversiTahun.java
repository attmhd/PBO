package matematika;

/**
 *
 * @author rosify
 */

import java.util.Scanner;


public class KonversiTahun {

    

    static int menu(){
        System.out.println("Aplikasi konversi tahun");
        System.out.println("==========================");
        System.out.println("1. ke- Bulan");
        System.out.println("2. ke- Minggu");
        System.out.println("3. ke- Hari");
        System.out.println("4. ke- Jam");
        System.out.println("5. ke- Menit");
        System.out.println("6. ke- Detik");
        System.out.println("0. Keluar");       
        System.out.print("Masukkan Pilihan Anda : ");
        Scanner input = new Scanner(System.in);
        int pil = input.nextInt();    

        return pil;
    }

    
    static int[] konversi(int tahun){
        int  bulan, minggu, hari, jam, menit, detik ;
        bulan = tahun * 12;
        minggu = bulan * 4;
        hari = minggu * 7;
        jam = hari * 24;
        menit = jam * 60;
        detik = menit * 60;

        int[] result = new int[6];
        result[0] = bulan;
        result[1] = minggu;
        result[2] = hari;
        result[3] = jam;
        result[4] = menit;
        result[5] = detik;
        return result;

    }

    public static void main(String[] args) {
        int tahun, pilihan;
        int[] result;

        Scanner input = new Scanner(System.in);

        pilihan = menu();

        switch (pilihan) {
            case 0:
                System.out.println("Program selesai ....");
                break;
            case 1:
                System.out.print("Masukkan tahun : ");
                tahun = input.nextInt();
                result = konversi(tahun); 
                System.out.printf("%d tahun = %d bulan \n", tahun, result[0]);
                break;
            case 2:
                System.out.print("Masukkan tahun : ");
                tahun = input.nextInt();
                result = konversi(tahun); 
                System.out.printf("%d tahun = %d minggu \n", tahun, result[1]);
                break;
            case 3:
                System.out.print("Masukkan tahun : ");
                tahun = input.nextInt();
                result = konversi(tahun); 
                System.out.printf("%d tahun = %d hari \n", tahun, result[2]);
                break;
            case 4:
                System.out.print("Masukkan tahun : ");
                tahun = input.nextInt();
                result = konversi(tahun); 
                System.out.printf("%d tahun = %d jam \n", tahun, result[3]);
                break;        
            case 5:
                System.out.print("Masukkan tahun : ");
                tahun = input.nextInt();
                result = konversi(tahun); 
                System.out.printf("%d tahun = %d menit \n", tahun, result[4]);
                break;        
            case 6:
                System.out.print("Masukkan tahun : ");
                tahun = input.nextInt();
                result = konversi(tahun); 
                System.out.printf("%d tahun = %d detik \n", tahun, result[5]);
                break;
            default:
                System.out.println("Pilihan yang anda masukkan out of Context .....");
                break;
        }        
    }

}
