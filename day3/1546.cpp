// 1546.cpp
// 백준 1546번

#include <iostream>
#include <vector>   // 벡터를 사용하기 위한 헤더 파일

using namespace std; 

int main(){
    int n;
    cin >> n;

    vector<int> v(n); // 크기가 n인 벡터 v 선언
    double max_score = 0;   // 최대 점수를 저장할 변수 선언

    for(int i = 0; i < n; i++) {
        cin >> v[i]; // 벡터 v에 점수 입력 받기
        if(v[i] > max_score){   // 현재 점수가 최대 점수보다 크면
            max_score = v[i]; // 최대 점수를 갱신
        }
    }

    double sum = 0;

    for (int i = 0; i < n; i++){
        sum += v[i] / max_score * 100; // 각 점수를 최대 점수로 나눈 후 100을 곱하여 비율로 변환
    }

    double average = sum; // 평균을 저장할 변수
    cout << average / n << endl; // 평균 점수를 출력
    return 0;
}
