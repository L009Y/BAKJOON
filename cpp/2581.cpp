// �Ҽ�
/*
�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
�Է�
�Է��� ù° �ٿ� M��, ��° �ٿ� N�� �־�����.
M�� N�� 10,000������ �ڿ����̸�, M�� N���� �۰ų� ����.
���
M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ����Ѵ�.
��, M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� -1�� ����Ѵ�.
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