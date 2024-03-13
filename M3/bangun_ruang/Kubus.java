/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bangun_ruang;

/**
 *
 * @author LAB 2.2
 */
public class Kubus {
    
    static int[] kelilingDanVolume(int s){
        int k = 12 * s;
        int v = s * s * s;
        int[] result = new int[2];
        result[0] = k;
        result[1] = v;
        
        return result;
        
    }

    public static void main(String[] args){
        int[] result = kelilingDanVolume(5);
        System.out.printf("Volume = %d dan Keliling = %d \n", result[0] , result[1]);
    }
}
