// ������ ��
/*
�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� t�� �־�����. (1 �� t �� 100) ��� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ִ�. 
ù° �ٿ��� �����̰� �湮�� ������ �� n�� �־����� (1 �� n �� 20), ��° �ٿ��� ������ ��ġ�� �־�����. (0 �� xi �� 99)
���
�����̰� ������ �ߴ� ��� ������ �湮�ϰ� ���� ���ƿ��� ���� �ɾ�� �ϴ� �Ÿ��� �ּڰ��� ����Ѵ�. 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;

	int store, locate;
	vector<int> coordinates;
	while (true) {
		cin >> store;
		for (int i = 0; i < store; i++) {
			cin >> locate;
			coordinates.push_back(locate);
		}
		sort(coordinates.begin(), coordinates.end());
		int sum = 0;


		test--;
		if (test == 0)
			break;
	}
}