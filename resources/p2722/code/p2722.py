def f(n):
    if n == 1:
        return 5
    else:
        return f(n-1) + (5*n - (2*(n-1)+1))


n = int(input())

print(f(n))
