// 별 찍기 - 5
// 첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제. 별은 가운데를 기준으로 대칭이어야 한다.
// 입력 - 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
// 출력 - 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k < 2*i; k++) {
			cout << "*";
		}
		cout << '\n';
	}
}