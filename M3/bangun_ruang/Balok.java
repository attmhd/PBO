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
public class Balok {
    static int[] kelilingDanVolume(int p, int l,int t){
        
        
        int[] result = new int[2];
        result[0] = p * l * t;
        result[1] = (4*p) + (4*l) + (4*t);
        
        return result;
        
    }
    
    public static void main(String[] args){
        
        int[] result = kelilingDanVolume(2,2,2);
        System.out.printf("Volume = % d \n", result[0]);
        System.out.printf("Keliing = % d \n", result[1]);
    }
}
