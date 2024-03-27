package M6.Matematika;

public class KalkulatorAksi {

    public static void main(String[] args){
        Kalkulator kalk = new Kalkulator();

        kalk.pertambahan(10, 30);
        System.out.println(kalk.hasil());

        kalk.pengurangan(10, 30);
        System.out.println(kalk.hasil());

        kalk.pembagian(10, 20);
        System.out.println(kalk.hasil());

        kalk.perkalian(10, 30);
        System.out.println(kalk.hasil());
    }
}
