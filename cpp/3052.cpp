// ������
/*
�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ��� �־�����. �� ���ڴ� 1,000���� �۰ų� ����, ���� �ƴ� �����̴�.
���
ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int rest[10] = { },store[10] = { };

	for (int i = 0; i < 10; i++) {
		cin >> rest[i];
		rest[i] = rest[i] % 42;;
	}
	int a = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (rest[i] == rest[j]) {
				a = 0;
				for (int i = 0; i < count; i++) {
					if (store[i] == rest[j])
						a = -1;
				}
				if (a != -1) {
					store[count] = rest[j];
					count++;
				}
			}
		}
	}
	if (count == 1)
		cout << count << '\n';
	else
		cout << 10 - count << '\n';
}