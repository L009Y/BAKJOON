// ���
/*
�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� - ù° �ٿ� ���� �� ������ ���� N�� �־�����.�� ���� 1000���� �۰ų� ����.��° �ٿ� �������� ���� ������ �־�����.
�� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.
��� - ù° �ٿ� ���ο� ����� ����Ѵ�.���� ����� ��°��� ������� �Ǵ� �������� 10 - 2 �����̸� �����̴�.
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