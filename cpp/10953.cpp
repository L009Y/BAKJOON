// A+B - 6
/*
*�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. A�� B�� �޸�(,)�� ���еǾ� �ִ�. (0 < A, B < 10)
���
�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int test, a, b;
	cin >> test;

	while (true) {
		scanf_s("%d, %d", &a, &b);
		cout << a + b << '\n';
		test--;
		if (test == 0)
			break;
	}
}