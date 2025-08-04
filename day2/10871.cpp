// 10871.cpp
// 백준 10871번

#include <iostream> // 입출력을 위한 헤더 파일
using namespace std; // std 네임스페이스 사용

int main() {
    int N, X; // N: 배열의 크기, X: 비교할 값
    int A;

    cin >> N >> X; // 사용자로부터 N과 X 입력 받기

    for(int i = 0; i < N; i++) {
        cin >> A; // 배열의 각 원소 A 입력 받기
        if (A < X) {
            cout << A << " "; // A가 X보다 작으면 출력
        }

    }
}