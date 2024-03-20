package M5.oop_rabu_1000_2022610013.Matematika;

public class BangunDatar {

    private int L, k;
    int p, l,  s;

    int[] HitungLuasKelilingPersegiPanjang(){

        L = p * l ;
        k = (2 * p) + (2 * l);

        int[] result = new int[2];
        result[0] = L;
        result[1] = k;
        return result;
    }

    int[] HitungLuasKelilingBujurSangkar(){
        L = s * s ;
        k = 4 * s;

        int[] result = new int[2];
        result[0] = L;
        result[1] = k;
        return result;
    } 


}
