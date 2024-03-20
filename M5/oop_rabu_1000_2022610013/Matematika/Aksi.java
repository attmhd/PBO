package M5.oop_rabu_1000_2022610013.Matematika;

public class Aksi {


    public static void main(String[] args){

        BangunDatar PersegiPanjang = new BangunDatar();
        BangunDatar BujurSangkar = new BangunDatar();

        PersegiPanjang.p = 10;
        PersegiPanjang.l = 5;

        int[] resultA = PersegiPanjang.HitungLuasKelilingPersegiPanjang();

        System.out.printf("Luas = %d dan Keliling = %d \n", resultA[0] , resultA[1]);

        BujurSangkar.s = 10;
        
        int[] resultB = BujurSangkar.HitungLuasKelilingBujurSangkar();

        System.out.printf("Luas = %d dan Keliling = %d \n", resultB[0] , resultB[1]);
    }

}
