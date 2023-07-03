// 소수찾기
/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
입력 - 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
출력 - 주어진 수들 중 소수의 개수를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, a, count = 0;
	cin >> num;
	
	vector<int> minority;

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &a);
		minority.push_back(a);
	}
	for (int i = 0; i < num; i++) {
		int j = 2;
		while (true) {
			int result = minority[i] % j;
			if (((result == 0 && minority[i] != 2) || minority[i] == 1)) {
				count++;
				break;
			}
			j++;
			if (j == minority[i])
				break;
		}
	}
	printf("%d", num - count);
}