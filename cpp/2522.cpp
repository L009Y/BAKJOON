// �� ��� - 13
// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
// �Է� - ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ��� - ù° �ٺ��� 2��N - 1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = i+1; j < num; j++)
			cout << " ";
		for (int k = num-i; k <=num; k++)
			cout << "*";
		cout << '\n';
	}
	for (int i = 0; i < num; i++) {
		for (int j = num - (i+1); j < num; j++)
			cout << " ";
		for (int k = i+1; k < num; k++)
			cout << "*";
		printf("\n");
	}
}