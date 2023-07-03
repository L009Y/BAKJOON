// 나는 요리사다
/*
각 참가자가 얻은 평가 점수가 주어졌을 때, 우승자와 그의 점수를 구하는 프로그램을 작성하시오.
입력
총 다섯 개 줄에 각 참가자가 얻은 네 개의 평가 점수가 공백으로 구분되어 주어진다. 
첫 번째 참가자부터 다섯 번째 참가자까지 순서대로 주어진다. 항상 우승자가 유일한 경우만 입력으로 주어진다.
출력
첫째 줄에 우승자의 번호와 그가 얻은 점수를 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int a, score[5] = { };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> a;
			score[i] += a;
		}
	}
	int max = -1, index;
	for (int i = 0; i < 5; i++) {
		max = score[i] > max ? score[i] : max;
		if (max == score[i])
			index = i;
	}
	cout << index + 1 << " " << max;
}