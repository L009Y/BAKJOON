// 소수
/*
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
입력
입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.
출력
M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다.
단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int low, high, val, sum = 0, min = 0;
	cin >> low >> high;

	for (int j = low; j <= high; j++) {
		int count = 0;
		for (int i = 2; i <= high; i++) {
			val = j % i;
			if (val == 0 && j != 2)
				break;
			count++;
		}
		if (count == high - 1) {
			sum += j;
			if (min == 0)
				min = j;
		}
	}

	cout << sum << '\n' << min;
}