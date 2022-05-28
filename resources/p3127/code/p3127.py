# 스택을 생성한다.
stack = list()

# 공백 단위로 문자열을 끊는다.
tokens = input().split()

# 공백 단위로 잘린 문자열을 token 변수 담아 하나씩 순회한다.
for token in tokens:
    if token.isnumeric():
        # 만약 토큰이 숫자라면, 정수형으로 변환 후 스택에 저장한다.
        stack.append(int(token))
    else:
        # 만약 토큰이 숫자가 아니라면(연산자라면), 스택에서 두 숫자를 꺼내 a, b 에 저장한다.
        a = stack.pop()
        b = stack.pop()

        # 연산자에 따라 연산 후, 그 값을 스택에 저장한다.
        if token == '+':
            stack.append(b + a)
        elif token == '-':
            stack.append(b - a)
        elif token == '*':
            stack.append(b * a)
        elif token == '/':
            stack.append(b / a)

# 마지막으로 연산된 값을 출력한다.
print(stack[-1])
