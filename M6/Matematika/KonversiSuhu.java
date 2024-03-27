package M6.Matematika;

public class KonversiSuhu {
    private float  hasil;

    

    void konversiSuhu(int pilihan, int suhu ){
        

        switch (pilihan) {
            case 1:
                hasil = 273 + suhu;
                break;
            case 2:
                hasil = suhu - 273;
                break;
            case 3:
                hasil = (float)(9/5 * suhu) + 32;
                break;
            case 4:
                hasil = (float)5/9 * (suhu -32);
                break;
            case 5:
                hasil =  (float)5/4 * suhu;
                break;
            case 6:
                hasil = (float)4/5 * suhu;
                break;
            default:
                System.out.println("Pilihan anda out of Context ...........");
                break;
        }
    }

    float hasil(){
        return hasil;
    }
}
