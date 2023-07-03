// 최대값
/*
입력 - 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100 보다 작다.
출력 - 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int max, count, store[10];

	for (int i = 0; i < 9; i++)
		cin >> store[i];
	max = -1;
	for (int i = 0; i < 9; i++) {
		max = max > store[i] ? max : store[i];
		if (max == store[i])
			count = i;
	}
	cout << max << '\n' << count + 1;
}