// �� ��� - 7
// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
// �Է� - ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ��� - ù° �ٺ��� 2��N - 1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j > 0; j--) 
			cout << " ";
		for (int k = 1; k < 2 * i; k++) 
			cout << "*";
		cout << '\n';
	}
	for (int i = num; i > 0; i--) {
		for (int j = num - i; j >= 0; j--)
			cout << " ";
		for (int k = 3; k < 2 * i; k++)
			cout << "*";
		cout << '\n';
	}
}