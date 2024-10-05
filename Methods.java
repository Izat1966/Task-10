public class StringProcessor {
    private String password;
    private String sentence;
    private String expression;
    public int CalculateDigits(String sentence) {
        int c = 0;
        for (int i=0; i<sentence.length(); i++) {
            char a = sentence.charAt(i);
            if (Character.isDigit(a)) {
                c++;
            }
        }
        return c;
    }
  
    public String GetSentence() {
        return sentence;
    }

    public StringProcessor() {
        sentence = "This sentence";
    }
}
