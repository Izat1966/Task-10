import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class MethodsTest {

    @Test
    void TwoPlusTwoShouldBeFour() {
        var Methods = new Methods();
        assertEquals(5, Methods.add(2,2));
    }
}