package M6.Matematika;

public class Kalkulator {
    private int a,b, hasil;

    void pertambahan(int a, int b){
        hasil = a + b;

        System.out.printf("Pertambahan\t: %d + %d = ", a, b);
    }

    void pengurangan(int a , int b){
        hasil = a - b;

        System.out.printf("Pengurangan\t: %d - %d = ", a, b);
    }

    void pembagian(int a , int b){
        hasil = a / b;

        System.out.printf("Pembagian\t: %d / %d = ", a, b);
    }

    void perkalian(int a , int b){
        hasil = a * b;

        System.out.printf("Perkalian\t: %d * %d = ", a, b);
    }

    int hasil(){
        return hasil;
    }

    

}
