// �� ��� - 13
// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
// �Է� - ù° �ٿ� N(1 �� N �� 100)�� �־�����.
// ��� - ù° �ٺ��� 2��N - 1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

#include <iostream>
using namespace std;

int main() {

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < num; i++) {
		for (int j = num - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}