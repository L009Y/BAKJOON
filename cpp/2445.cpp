// �� ��� - 8
/*
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
�Է� - ù° �ٿ� N(1 �� N �� 100)�� �־�����.
��� - ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int a = num - i; a < num; a++)
			cout << "*";
		for (int b = 2*i; b < 2 * num; b++)
			cout << " ";
		for (int c = num-i; c < num; c++)
			cout << "*";
		cout << '\n';
	}
	for (int i = 1; i <= num; i++) {
		for (int a = i; a < num; a++)
			cout << "*";
		for (int b = 2 * (num-i); b < 2 * num; b++)
			cout << " ";
		for (int c = i; c < num; c++)
			cout << "*";
		cout << '\n';
	}
}