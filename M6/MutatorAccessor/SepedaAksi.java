package M6.MutatorAccessor;

public class SepedaAksi {
    public static void main(String[] args){
        Sepeda sepedaDen = new Sepeda();
        sepedaDen.aturGear(1);
        System.out.printf("Posisi Gear  = %d \n",sepedaDen.hasilGear());
        sepedaDen.aturGear(4);
        System.out.printf("Posisi Gear  = %d \n",sepedaDen.hasilGear());
    }
}
