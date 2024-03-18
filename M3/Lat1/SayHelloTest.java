package Lat1;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class SayHelloTest {

    private SayHello say = new SayHello();

    @Test

    public void sayHelloTest(){
        var result = say.Hello("attan");
        var expect = "Hello attan";
        assertEquals("Should be same",expect, result);

    }
}
