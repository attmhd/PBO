package M6.Matematika;

public class KonversiSuhuAksi {
    public static void main(String[] args){
        KonversiSuhu kSuhu = new KonversiSuhu();

        kSuhu.konversiSuhu(5, 33);
        System.out.printf("Hasil = %.2f \n", kSuhu.hasil());
    }
}
