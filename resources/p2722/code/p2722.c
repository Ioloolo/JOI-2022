#include <stdio.h>

int f(int n) {
    if (n == 1) return 5;
    else return f(n-1) + (5*n - (2*(n-1)+1));
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", f(n));
}