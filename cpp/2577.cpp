// ������ ����
/*
�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. A, B, C�� ��� 100���� ũ�ų� ����, 1,000���� ���� �ڿ����̴�.
���
ù° �ٿ��� A �� B �� C�� ����� 0 �� �� �� �������� ����Ѵ�. 
���������� ��° �ٺ��� �� ��° �ٱ��� A �� B �� C�� ����� 1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long a, b, c;
	long long result;
	cin >> a >> b >> c;

	result = (a * b * c);
	vector<long long> store;
	while (result != 0) {
		store.push_back(result % 10);
		result /= 10;
	}

	for (int i = 0; i <= 9; i++) {
		int count = 0;
		for (int j = 0; j < store.size(); j++) {
			if (store[j] == i)
				count++;
		}
		cout << count << '\n';
	}
}