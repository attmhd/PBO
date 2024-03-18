package matematika;

import static org.junit.Assert.assertArrayEquals;

import org.junit.Test;

public class KonversiTahunTest {

    private KonversiTahun kt = new KonversiTahun();

    @Test

    public void ktTest(){
        var result = kt.konversi(1);
        int[] expect = {12,52,365,8760,525600,31536000};

        assertArrayEquals("Should be same",expect, result);
        
    }
}
