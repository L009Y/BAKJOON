// �� ��� - 6
// ù° �ٿ��� �� 2��N-1��, ��° �ٿ��� �� 2��N-3��, ..., N��° �ٿ��� �� 1���� ��� ����. ���� ����� �������� ��Ī�̾�� �Ѵ�.
// �Է� - ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ��� - ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = num; i > 0; i--) {
		for (int j = num - i; j > 0; j--)
			cout << " ";
		for (int k = 1; k < 2*i; k++)
			cout << "*";
		cout << '\n';
	}
}