// ���丮��
/*
0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� - ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.
��� - ù° �ٿ� N!�� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int num, result = 1;
	cin >> num;

	if (num == 0)
		cout << "1";
	else {
		for (int i = 1; i <= num; i++)
			result *= i;
		cout << result;
	}
}