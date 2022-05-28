# 'x' 기준으로 자른 후, 정수형으로 변환한다.
a, b = map(int, input().split('x'))

print(format(-b/a, '.2f'))