// 10952.cpp
// 백준 10952번

#include <iostream> // 입출력을 위한 헤더 파일
using namespace std; // std 네임스페이스 사용

int main() {
    int A, B, C; // A와 B를 저장할 변수 선언
    for(int i = 0; ; i++) {    // 무한 루프 시작
        cin >> A >> B; // A와 B를 입력받음
        C = A + B; // A와 B의 합을 C에 저장
        if (A == 0 && B == 0) { // A와 B가 모두 0이면
            break; // 루프 종료
        } else { // A와 B가 0이 아니면
            cout << C << endl; // A와 B의 합을 출력
        }
    }
}