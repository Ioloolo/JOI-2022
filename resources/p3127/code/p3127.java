import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class p3127 {
    private static final BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        // 스택을 생성한다.
        Stack<Integer> stack = new Stack<>();

        // 공백 단위로 문자열을 끊는다.
        StringTokenizer tokenizer = new StringTokenizer(reader.readLine());

        // 만약 남은 토큰이 존재한다면,
        while (tokenizer.hasMoreTokens()) {
            // token 변수에 토큰을 저장한다.
            String token = tokenizer.nextToken();

            try {
                // 정수형으로 변환 후, 스택에 저장한다.
                stack.push(Integer.parseInt(token));
            } catch (NumberFormatException e) {
                // 만약 형변환에 실패한다면, 스택에서 두 숫자를 꺼내 a, b 에 저장한다.
                int a = stack.pop();
                int b = stack.pop();

                // 연산자에 따라 연산 후, 그 값을 스택에 저장한다.
                switch (token) {
                    case "+":
                        stack.push(b + a);
                        break;
                    case "-":
                        stack.push(b - a);
                        break;
                    case "*":
                        stack.push(b * a);
                        break;
                    case "/":
                        stack.push(b / a);
                        break;
                }
            }
        }

        // 마지막으로 연산된 값을 출력한다.
        System.out.println(stack.peek());
    }
}