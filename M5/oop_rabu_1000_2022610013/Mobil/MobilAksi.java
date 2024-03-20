package M5.oop_rabu_1000_2022610013.Mobil;

public class MobilAksi {

    public static void main(String[] args){
      
        //create object

        Mobil mb1 = new Mobil();
        Mobil mb2 = new Mobil();

        //properti objek
        mb1.ban = 4;
        mb1.color = "red";
        mb1.gear = 6;
        mb1.merk = "inimobil";
        mb1.type = "4x4";

        System.out.println(mb1.merk );
        mb1.start();

        mb2.ban = 6;
        mb2.color = "kuning";
        mb2.gear = 8;
        mb2.merk = "inipunmobil";
        mb2.type = "6x6";

        System.out.println(mb2.merk );
        mb2.start();
    } 
}
