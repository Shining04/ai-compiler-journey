#include <iostream>

using namespace std;

int main() {
    int N; // 합의 공식 활용할 끝 번호 N 입력
    cin >> N; // N 변수 입력

    cout << N * (N+1) / 2 << endl; // 합의 공식 활용하여 출력

    return 0;
}