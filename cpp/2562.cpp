// �ִ밪
/*
�Է� - ù° �ٺ��� ��ȩ ��° �ٱ��� �� �ٿ� �ϳ��� �ڿ����� �־�����. �־����� �ڿ����� 100 ���� �۴�.
��� - ù° �ٿ� �ִ��� ����ϰ�, ��° �ٿ� �ִ��� �� ��° �������� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int max, count, store[10];

	for (int i = 0; i < 9; i++)
		cin >> store[i];
	max = -1;
	for (int i = 0; i < 9; i++) {
		max = max > store[i] ? max : store[i];
		if (max == store[i])
			count = i;
	}
	cout << max << '\n' << count + 1;
}