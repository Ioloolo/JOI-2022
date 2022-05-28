import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class p6130 {
    private static final BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        // 공백 단위로 문자열을 끊는다.
        StringTokenizer tokenizer = new StringTokenizer(reader.readLine(), "x");

        int a = Integer.parseInt(tokenizer.nextToken());
        int b = Integer.parseInt(tokenizer.nextToken());

        System.out.printf("%.2f", (float) -b/a);
    }
}