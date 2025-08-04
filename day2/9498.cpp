// 9498.cpp
// 백준 9498번

#include <iostream> // 입출력을 위한 헤더 파일
using namespace std; // std 네임스페이스 사용

int main() {
    int score; // 점수를 저장할 변수 선언
    cin >> score; // 점수를 입력받음

    if (score >= 90) {
        cout << "A" << endl;
     } // 90점 이상이면 A 출력
    else if(score >= 80) {
        cout << "B" << endl; // 80점 이상이면 B 출력
    }
    else if(score >= 70) {
        cout << "C" << endl; // 70점 이상이면 C 출력
    }
    else if(score >= 60) {
        cout << "D" << endl; // 60점 이상이면 D 출력
    }
    else {
        cout << "F" << endl; // 그 외의 경우 F 출력
    }
}