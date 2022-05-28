#include <iostream>

using namespace std;

// IO 최적화 함수.
void untie() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

int f(int n) {
    if (n == 1) return 5;
    else return f(n-1) + (5*n - (2*(n-1)+1));
}

int main() {
    // IO 최적화 함수 호출.
    untie();

    int n;

    cin >> n;
    cout << f(n);
}