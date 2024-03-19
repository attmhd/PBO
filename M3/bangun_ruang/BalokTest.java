package bangun_ruang;

import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class BalokTest {
    
    private Balok bl = new Balok();

    @Test
    public void testKelilingDanVolume() {
        var result = bl.kelilingDanVolume(2, 2, 2);
        int[] expect = {8,24};

        assertArrayEquals(expect, result);
    }
}
