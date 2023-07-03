// 점수집계
/*
점수를 집계하여 총점을 계산하거나, 점수 조정을 거쳐서 다시 점수를 매기려고 하는 경우에는 총점 대신 KIN(Keep In Negotiation)을 출력하는 프로그램을 작성하시오.
입력
입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 
각 테스트 케이스는 한 줄에 다섯 심판이 준 점수 다섯 개의 정수 Ni(1 ≤ Ni ≤ 10, i = 1, 2, ..., 5)가 하나의 공백을 사이에 두고 주어진다.
출력
각 테스트 케이스에 대해서 총점을 한 줄씩 출력한다. 만일 점수 조정을 거쳐서 다시 점수를 매기려고 하는 경우에는 총점 대신 KIN을 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int test, a;
	cin >> test;

	int** score = new int* [test];

	for (int i = 0; i < test; i++)
		score[i] = new int[5];

	for (int i = 0; i < test; i++) {
		int max = 0, min = 11, sum = 0;
		int max1 = 0, min1 = 11;
		for (int j = 0; j < 5; j++) {
			cin >> a;
			score[i][j] = a;
			if (max < a)
				max = a;
			if (min > a)
				min = a;
			// cout << "max : " << max << " min : " << min << '\n';
		}
		for (int k = 0; k < 5; k++) {
			if (max1 < score[i][k] && max != score[i][k])
				max1 = score[i][k];
			if (min1 > score[i][k] && min != score[i][k])
				min1 = score[i][k];
			// cout << "max1 : " << max1 << " min1 : " << min1 << '\n';
		}
		if (max1 - min1 >= 4)
			printf("KIN \n");
		else {
			for (int t = 0; t < 5; t++)
				sum += score[i][t];
			cout << sum - (min + max) << '\n';
		}
	}

	for (int i = 0; i < 5; i++)
		delete score[i];

	delete[]score;
}