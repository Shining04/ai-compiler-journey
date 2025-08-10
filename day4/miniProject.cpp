#include <iostream>
#include <string> // 문자열을 사용하기 위한 헤더 파일

using namespace std;

int main() {
    string s; // 문자열 변수 s 만들기
    
    cin >> s; // 문자열 입력 받기

    for (int i = s.size()-1; i >= 0 ; i--) { // i를 문자열-1 만큼 받고, i--를 통해 0 이상 유지 로직
        cout << s[i] << endl; // 문자열 거꾸로 출력
    }

    return 0;
}