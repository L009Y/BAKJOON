// 평균
/*
세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.
입력 - 첫째 줄에 시험 본 과목의 개수 N이 주어진다.이 값은 1000보다 작거나 같다.둘째 줄에 세준이의 현재 성적이 주어진다.
이 값은 100보다 작거나 같은 음이 아닌 정수이고, 적어도 하나의 값은 0보다 크다.
출력 - 첫째 줄에 새로운 평균을 출력한다.실제 정답과 출력값의 절대오차 또는 상대오차가 10 - 2 이하이면 정답이다.
*/

#include <iostream>
using namespace std;

int main() {
	double max = -1, sum = 0;
	int subject;
	cin >> subject;

	double* score = new double[subject + 1];
	for (int i = 1; i <= subject; i++) {
		cin >> score[i];
		if (max < score[i])
			max = score[i];
	}

	for (int i = 1; i <= subject; i++) {
		score[i] = (score[i] / max) * 100;
		sum += score[i];
	}
	cout << fixed;
	cout.precision(2);
	cout << sum / (double)subject;

	delete[]score;
}