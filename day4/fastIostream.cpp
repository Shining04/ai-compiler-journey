#include <iostream>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(false); // C++의 입출력 성능을 향상시키기 위해 동기화 비활성화
    cin.tie(nullptr); // cin과 cout의 동기화를 해제하여 성능 향상

    string s;
    getline(cin, s); // 표준 입력에서 한 줄을 읽어들임
    cout << "Input: " << s << endl;
    
    string part = s.substr(0, 5); // 문자열의 처음 5글자를 추출
    cout << part << endl;

    int num = stoi("123"); // 문자열을 정수로 변환
    cout << "123 + 1 = " << num + 1 << endl;

    string str = to_string(456); // 정수형을 문자열로 변환
    cout << str << endl;
}