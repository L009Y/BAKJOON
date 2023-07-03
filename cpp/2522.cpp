// 별 찍기 - 13
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
// 입력 - 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
// 출력 - 첫째 줄부터 2×N - 1번째 줄까지 차례대로 별을 출력한다.

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = i+1; j < num; j++)
			cout << " ";
		for (int k = num-i; k <=num; k++)
			cout << "*";
		cout << '\n';
	}
	for (int i = 0; i < num; i++) {
		for (int j = num - (i+1); j < num; j++)
			cout << " ";
		for (int k = i+1; k < num; k++)
			cout << "*";
		printf("\n");
	}
}