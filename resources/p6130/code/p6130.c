#include <stdio.h>

int main() {
    int a, b;

    scanf("%dx%d", &a, &b);

    // 주의: 실수형으로 형변환을 하여야 한다.
    printf("%.2f", (float) -b/a);
}