import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class StringProcessorTest {
    @Test
    void TestingDigits() {
        var Re = new StringProcessor();
        assertEquals(2, Re.CalculateDigits("Izat12"));
    }
    @Test
    void TestingDigits1() {
        var Re1 = new StringProcessor();
        assertEquals(7,Re1.CalculateDigits("5Az78a88t65"));
    }
    @Test
    void TestingDigits2() {
        var Re2 = new StringProcessor();
        assertEquals(0,Re2.CalculateDigits("Namapov"));
    }
    @Test
    void TestingDigits3() {
        var Re3 = new StringProcessor();
        assertEquals(1,Re3.CalculateDigits("1To be two"));
    }
    @Test
    void TestingDigits4() {
        var Re4 = new StringProcessor();
        assertEquals(4,Re4.CalculateDigits("Taraz were born in 2007"));
    }
}
