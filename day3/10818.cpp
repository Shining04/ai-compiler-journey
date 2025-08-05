// 백준 10818번 - 최소, 최대
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);           // n개의 정수를 저장할 벡터
    for (int i = 0; i < n; i++) {
        cin >> v[i];            // 정수 입력
    }

    // 최소값과 최대값을 첫 번째 입력값으로 초기화
    int min_v = v[0];
    int max_v = v[0];

    // 모든 값 비교하며 최솟값, 최댓값 갱신
    for (int i = 1; i < n; i++) {
        if (v[i] < min_v) min_v = v[i];
        if (v[i] > max_v) max_v = v[i];
    }

    cout << min_v << " " << max_v << '\n';  // 공백 하나로 구분해서 출력
    return 0;
}
