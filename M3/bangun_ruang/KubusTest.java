package bangun_ruang;

import static org.junit.Assert.assertArrayEquals;

import org.junit.Test;

public class KubusTest {

    private Kubus kb =  new Kubus();

    @Test
    public void testKelilingDanVolume() {
        var result = kb.kelilingDanVolume(10);
        int[] expect = {120, 1000};

        assertArrayEquals(expect, result);
    }
}
