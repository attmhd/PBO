package matematika;

import static org.junit.Assert.assertArrayEquals;

import org.junit.Test;

public class HitungUmurTest {

    private HitungUmur hUmur = new HitungUmur();

    @Test

    public void HitungUmurTest(){
        var result = hUmur.hitungUmur(2, 2000);
        int[] expect = {24,1};

        assertArrayEquals("Harusnya Sama",expect, result);   
    }
}
