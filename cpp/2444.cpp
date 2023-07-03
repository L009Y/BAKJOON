// 별 찍기 - 7
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
// 입력 - 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
// 출력 - 첫째 줄부터 2×N - 1번째 줄까지 차례대로 별을 출력한다.

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j > 0; j--) 
			cout << " ";
		for (int k = 1; k < 2 * i; k++) 
			cout << "*";
		cout << '\n';
	}
	for (int i = num; i > 0; i--) {
		for (int j = num - i; j >= 0; j--)
			cout << " ";
		for (int k = 3; k < 2 * i; k++)
			cout << "*";
		cout << '\n';
	}
}