#include <iostream>

using namespace std;

int main() {
    int N; // 몇 단인지 알기 위한 변수
    
    cin >> N; // N 변수 입력

    for(int i = 1; i < 10; i++){ // 곱셈 반복문
        cout << N << " * " << i << " = " << N * i << endl; // 곱셈 반복 출력
    }
    return 0;   
}