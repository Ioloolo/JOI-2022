#include <iostream>

using namespace std;

// IO 최적화 함수.
void untie() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

int main() {
    // IO 최적화 함수 호출.
    untie();

    int k, n;

    cin >> k >> n;
    cout << k*n;
}