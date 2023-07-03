// 점수 계산
/*
시험문제의 채점 결과가 주어졌을 때, 총 점수를 계산하는 프로그램을 작성하시오.(연속으로 맞추냐 아니냐에 따라 부여받는 점수 상이)
입력 - 첫째 줄에 문제의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 N개 문제의 채점 결과를 나타내는 0 혹은 1이 빈 칸을 사이에 두고 주어진다. 0은 문제의 답이 틀린 경우이고, 1은 문제의 답이 맞는 경우이다. 
출력 - 첫째 줄에 입력에서 주어진 채점 결과에 대하여 가산점을 고려한 총 점수를 출력한다. 
*/

#include <iostream>
using namespace std;

int main() {
	int num, count = 0, sum = 0, a;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a;
		if (a == 0)
			count = 0;
		else if (a == 1) {
			count++;
			sum += count;
		}
	}
	cout << sum;
}