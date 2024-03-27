package M6.MutatorAccessor;

public class Sepeda {
    
    //mutator
    private int gear;
    void aturGear(int TambahGir){
        gear += TambahGir;
    }

    //accessor
    int hasilGear(){
        return gear;
    }
}
