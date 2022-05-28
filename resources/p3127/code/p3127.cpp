#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>

using namespace std;

// IO 최적화 함수.
void untie() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

// 문자열을 공백 단위로 자르는 함수.
vector<string> split(const string& str) {
    istringstream iss(str);
    string tmp;
    vector<string> result;

    while (getline(iss, tmp, ' '))
        result.push_back(tmp);

    return result;
}

int main() {
    // IO 최적화 함수 호출.
    untie();

    // 스택을 생성한다.
    stack<int> stack;

    // str 변수에 입력을 받는다.
    string str;
    getline(cin, str);

    // 공백 단위로 문자열을 끊는다.
    vector<string> tokens = split(str);

    // 공백 단위로 잘린 문자열을 token 변수 담아 하나씩 순회한다.
    for (const string& token : tokens) {
        // 토큰을 숫자로 형변환한다.
        int i;
        stringstream streamInt(token);
        streamInt >> i;

        if (!streamInt.fail())
            // 만약 형변환에 성공했다면, 스택에 저장한다.
            stack.push(i);
        else {
            // 만약 형변환에 실패했다면, 스택에서 두 숫자를 꺼내 a, b 에 저장한다.
            int a = stack.top();
            stack.pop();

            int b = stack.top();
            stack.pop();

            // 연산자에 따라 연산 후, 그 값을 스택에 저장한다.
            if (token == "+")
                stack.push(b + a);
            else if (token == "-")
                stack.push(b - a);
            else if (token == "*")
                stack.push(b * a);
            else if (token == "/")
                stack.push(b / a);
        }
    }

    // 마지막으로 연산된 값을 출력한다.
    cout << stack.top();
}