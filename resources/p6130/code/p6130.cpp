#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// IO 최적화 함수.
void untie() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

// 문자열을 특정 문자(delimiter) 기준으로 자르는 함수.
vector<string> split(const string& str, char delimiter) {
    istringstream iss(str);
    string tmp;
    vector<string> result;

    while (getline(iss, tmp, delimiter))
        result.push_back(tmp);

    return result;
}

// 문자열(String)을 정수형(Integer)로 변환해주는 함수.
int toNumber(const string& str) {
    int i = 0;
    stringstream streamInt(str);
    streamInt >> i;

    return streamInt.fail() ? 0 : i;
}

int main() {
    // IO 최적화 함수 호출.
    untie();

    // str 변수에 입력을 받는다.
    string str;
    getline(cin, str);

    // 'x'문자 기준으로 문자열을 자른다.
    vector<string> coefficients = split(str, 'x');

    // a와 b를 꺼낸 후, 정수형으로 변환한다.
    int a = toNumber(coefficients[0]);
    int b = toNumber(coefficients[1]);

    // 소숫점을 2자리까지 설정한다.
    cout.precision(2);
    // 소숫점을 고정 후, 근을 출력한다.
    cout << fixed << (float) -b/a;
}

