// ��?
// ��� �ɼ��� �־��� �ڵ����� �����ϴµ� �ʿ��� �׼��� ����� ����.
// �Է� - ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����.
// �� �׽�Ʈ ���̽��� ù �ٿ� �ڵ����� ���� s�� �־�����. (1 �� s �� 100 000)
// ��° �ٿ� �غ��̰� �����Ϸ��� �ϴ� ���� �ٸ� �ɼ��� ���� n�� �־�����. (0 �� n �� 1 000)
// ���̾� n���� ���� �Է����� ���´�.�� ���� q �� p�� �̷���� �ִµ� q�� �غ��̰� ����� �ϴ� Ư�� �ɼ��� �����̰� p�� �ش� �ɼ��� �����̴�. (1 �� q �� 100, 1 �� p �� 10 000)
// ��� - �� �׽�Ʈ ���̽� ����, �غ��̰� ���������� �����Ϸ��� �ڵ����� ������ ���پ� ����Ѵ�.

#include <iostream>
using namespace std;

int main() {
	int testNum, opNum, carPrice, opPrice, totalPrice, option;
	cin >> testNum;
	
	while (true) {
		cin >> carPrice;
		totalPrice = carPrice;
		cin >> opNum;

		for (int i = 0; i < opNum; i++) {
			cin >> option >> opPrice;
			totalPrice += (option * opPrice);
		}
		cout << totalPrice << '\n';
		testNum--;
		if (testNum == 0)
			break;
	}
}