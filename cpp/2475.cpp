// 검증수
/*
예를 들어 고유번호의 처음 5자리의 숫자들이 04256이면, 각 숫자를 제곱한 수들의 합 0+16+4+25+36 = 81 을 10으로 나눈 나머지인 1이 검증수이다.
입력 - 첫째 줄에 고유번호의 처음 5자리의 숫자들이 빈칸을 사이에 두고 하나씩 주어진다.
출력 - 첫째 줄에 검증수를 출력한다.
*/
#include <iostream>
using namespace std;

int main() {
	int num, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num * num;
	}
	cout << sum % 10;
}