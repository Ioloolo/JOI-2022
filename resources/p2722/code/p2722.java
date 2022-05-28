import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class p2722 {
    private static final BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        int n = Integer.parseInt(reader.readLine());

        System.out.println(f(n));
    }

    private static int f(int n) {
        if (n == 1) return 5;
        else return f(n-1) + (5*n - (2*(n-1)+1));
    }
}