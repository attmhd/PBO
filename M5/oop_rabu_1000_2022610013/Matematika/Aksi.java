package M5.oop_rabu_1000_2022610013.Matematika;

public class Aksi {


    public static void main(String[] args){

        BangunDatar PersegiPanjang = new BangunDatar();
        BangunDatar BujurSangkar = new BangunDatar();

        PersegiPanjang.p = 10;
        PersegiPanjang.l = 10;

        PersegiPanjang.HitungLuasKelilingPersegiPanjang();

        BujurSangkar.s = 10;
        BujurSangkar.HitungLuasKelilingBujurSangkar();
    }

}
