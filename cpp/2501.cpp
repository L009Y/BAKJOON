// ��� ���ϱ�
/*
�� ���� �ڿ��� N�� K�� �־����� ��, N�� ����� �� K��°�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� N�� K�� ��ĭ�� ���̿� �ΰ� �־�����. N�� 1 �̻� 10,000 �����̴�. K�� 1 �̻� N �����̴�.
���
ù° �ٿ� N�� ����� �� K��°�� ���� ���� ����Ѵ�. ���� N�� ����� ������ K������ ��� K��° ����� �������� ���� ��쿡�� 0�� ����Ͻÿ�.
*/

#include <iostream>
using namespace std;
/*
int main() {
	int num, small, count = 0;
	cin >> num >> small;

	int aliquot[1000] = {0};

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			aliquot[count+1] = i;
			count++;
		}
	}

	if (count < small)
		cout << aliquot[0];
	else
		cout << aliquot[small];
}
*/

#include <vector>

int main() {
	int num, small;
	cin >> num >> small;

	vector<int> aliquot;

	aliquot.push_back(0);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) 
			aliquot.push_back(i);
	}

	if (aliquot.size() < small)
		cout << aliquot[0];
	else
		cout << aliquot[small];
}