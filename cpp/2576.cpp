// 홀수 
/*
7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오.
입력 - 입력의 첫째 줄부터 일곱 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100보다 작다.
출력 - 홀수가 존재하지 않는 경우에는 첫째 줄에 -1을 출력한다. 홀수가 존재하는 경우 첫째 줄에 홀수들의 합을 출력하고, 
둘째 줄에 홀수들 중 최솟값을 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int list[8];
	int sum = 0, count = 0;

	for (int i = 0; i < 7; i++) {
		cin >> list[i];
	}
	int min = 101;
	for (int i = 0; i < 7; i++) {
		if (list[i] % 2 != 0) {
			sum += list[i];
			min = min < list[i] ? min : list[i];
			count++;
		}
	}
	if (count == 0)
		cout << "-1";
	else
		cout << sum << '\n' << min;
}