// ��������
/*
������ �����Ͽ� ������ ����ϰų�, ���� ������ ���ļ� �ٽ� ������ �ű���� �ϴ� ��쿡�� ���� ��� KIN(Keep In Negotiation)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T(1 �� T �� 10)�� �־�����. 
�� �׽�Ʈ ���̽��� �� �ٿ� �ټ� ������ �� ���� �ټ� ���� ���� Ni(1 �� Ni �� 10, i = 1, 2, ..., 5)�� �ϳ��� ������ ���̿� �ΰ� �־�����.
���
�� �׽�Ʈ ���̽��� ���ؼ� ������ �� �پ� ����Ѵ�. ���� ���� ������ ���ļ� �ٽ� ������ �ű���� �ϴ� ��쿡�� ���� ��� KIN�� ����Ѵ�.
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