// ���̳�
/*
 N�� �Է¹��� ��, ũ�Ⱑ N�� ���̳� ��Ʈ���� ���� �� �� ���� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� - ù° �ٿ� ���̳� ��Ʈ�� ũ�� N (1 �� N �� 1000)�� �־�����.
��� - ũ�Ⱑ N�� ���̳� ��Ʈ�� ���� �ִ� ���� ������ ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int num, sum = 0; 
	cin >> num;

	for (int i = 0; i <= num; i++) {
		for (int j = i; j <= num; j++) {
			sum += i + j;
		}
	}
	cout << sum;
}