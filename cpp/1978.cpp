// �Ҽ�ã��
/*
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� - ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.
��� - �־��� ���� �� �Ҽ��� ������ ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, a, count = 0;
	cin >> num;
	
	vector<int> minority;

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &a);
		minority.push_back(a);
	}
	for (int i = 0; i < num; i++) {
		int j = 2;
		while (true) {
			int result = minority[i] % j;
			if (((result == 0 && minority[i] != 2) || minority[i] == 1)) {
				count++;
				break;
			}
			j++;
			if (j == minority[i])
				break;
		}
	}
	printf("%d", num - count);
}